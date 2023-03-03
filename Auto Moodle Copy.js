// ==UserScript==
// @name         Moodle thay thang
// @version      03.03.2023
//@match http://*.http://drnguyentt.com//*
// @description  Auto ed multipe choice answer
// @author       quochungcyou
// @include     *
// @run-at      document-start
//@license MIT

// ==/UserScript==
(function() {
    'use strict';

    function doSomething() {

        var allowPaste = function(e) {
            e.stopImmediatePropagation();
            return true;
        };

        document.addEventListener('paste', allowPaste, true);


    }
    setInterval(doSomething, 1500);
})();
