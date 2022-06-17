document.addEventListener("DOMContentLoaded", () => {
    function checkGrid(grid, rules) {
      let w = rules[1].length;
      let h = rules[0].length;
      function side(rules, g, w, h) {
        for (let y = 0; y < h; y++) {
          let runs = [];
          let last = false;
          let runlen = 0;
          for (let x = 0; x < w; x++) {
            let cur = g(x, y);
            if (cur !== last) {
              if (last && runlen > 0) runs.push(runlen);
              runlen = cur ? 1 : 0;
            } else if (last) {
              runlen++;
            }
            last = cur;
          }
          if (runlen > 0) runs.push(runlen);

          if (runs.join(",") !== rules[y].join(",")) return false;
        }
        return true;
      }
      return side(rules[0], (x, y) => grid[x + y * w], w, h)
        && side(rules[1], (y, x) => grid[x + y * w], h, w);
    }
  
    function check(flag) {
      if (!flag.match(/^BountyCon\{[_a-zA-Z0-9]{49}\}$/)) {
        return false;
      }
      let flagGrids = [];
      let xorGrids = [
        [1,1,1,0,0,1,1,0,1,0,1,1,1,1,1,1,0,0,0,0,1,0,0,1,0,1,1,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,1,1,1,1,0,0,0],
        [1,0,0,0,1,1,1,1,0,0,1,0,0,1,1,1,0,1,1,1,1,0,1,0,0,1,1,0,0,0,0,0,1,1,0,1,0,1,0,1,1,0,1,1,1,1,0,0,0],
        [1,0,1,0,0,0,0,0,0,1,1,1,1,0,1,1,1,1,0,0,0,1,1,1,0,0,0,1,0,1,0,1,0,1,0,0,0,0,0,0,1,1,0,0,0,1,1,0,1],
        [0,1,1,1,1,0,0,1,0,0,0,1,0,1,1,0,0,1,1,1,0,0,0,1,0,1,0,0,0,0,0,0,0,1,1,0,1,1,1,0,1,0,0,0,1,0,0,1,0],
        [1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,0,1,1,0,1,0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,1,0,1,1,1,1,1,0,0,0,0,0],
        [1,0,0,0,0,0,1,1,1,0,1,1,0,0,0,0,0,0,0,1,1,1,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,1,0,0,0,1,1,1,0,0],
        [1,0,0,0,1,0,1,0,0,0,1,0,1,1,0,0,0,1,0,0,1,1,1,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,0,0,0,1,0,0,1,0,0,1,1],
      ];
      for (let bit = 0; bit < 7; bit++) {
        flagGrids[bit] = [];
        for (let y = 0; y < 7; y++) {
          for (let x = 0; x < 7; x++) {
            let shift = (bit * 3 + x + y * 2) % 7;
            console.log(shift)
            flagGrids[bit][x + y * 7] = (flag.charCodeAt(10 + x + y * 7) >> shift) & 1;
            flagGrids[bit][x + y * 7] ^= xorGrids[bit][x + y * 7];
          }
        }
      }
      return checkGrid(flagGrids[0], [ [[2,1],[3],[4,2],[3,1],[2,3],[2],[2]], [[5],[5],[3],[1],[1],[1,3],[1,5]] ])
          && checkGrid(flagGrids[1], [ [[2],[3],[4],[4],[4],[4,1],[3]], [[3],[6],[6],[5],[2],[1],[2]] ])
          && checkGrid(flagGrids[2], [ [[2],[2],[1],[4],[5],[5],[3,1,1]], [[3],[4],[5],[3],[4],[2],[2,1]] ])
          && checkGrid(flagGrids[3], [ [[3],[3],[5],[4],[1,5],[1,1],[1,1]], [[2,3],[2],[5],[3],[4],[3],[1,1,1]] ])
          && checkGrid(flagGrids[4], [ [[4],[4],[5],[5],[1,3],[2],[1]], [[5],[3,1],[3],[5],[5],[1,1],[1]] ])
          && checkGrid(flagGrids[5], [ [[5],[4],[3],[5],[4],[3],[1]], [[2],[4],[1,4],[6],[2,1],[2],[2,1]] ])
          && checkGrid(flagGrids[6], [ [[3,1],[3,1],[1,5],[4],[1,2],[2],[2]], [[3],[2],[3],[5],[2,2],[3],[5]] ]);
    }
  
    let tds = document.querySelectorAll("td");
    for (let y = 2; y < 12; y++) {
      for (let x = 1; x < 8; x++) {
        tds[x + y * 8].innerHTML = `<input type="checkbox" id="l${x}-${y}"><label for="l${x}-${y}"></label>`;
        tds[x + y * 8].addEventListener("change", () => {
          let grid = [];
          for (let y = 0; y < 10; y++) {
            for (let x = 0; x < 7; x++) {
              grid.push(tds[1 + x + (2 + y) * 8].querySelector("input").checked ? 1 : 0);
            }
          }
          if (checkGrid(grid,[ [[2,1],[3],[4,2],[3,1],[2,3],[2],[2]], [[5],[5],[3],[1],[1],[1,3],[1,5]] ])) {
            console.log(grid)
            document.querySelector("table").classList.add("solved");
          } else {
            document.querySelector("table").classList.remove("solved");
          }
        });
      }
    }
  
    document.querySelector("button").addEventListener("click", () => {
      if (check(document.querySelector('input[type="text"]').value)) {
        document.querySelector("main").classList.add("unlocked");
      } else {
        document.querySelector("main").classList.remove("unlocked");
      }
    });
  });
  