// ==UserScript==
// @name         Moodle thay thang
// @version      11.03.2023
// @match http://*.drnguyentt.com/*
// @description  Moodle thay thang
// @author       quochungcyou
// @run-at      document-start
// @license MIT
// @include http://*.drnguyentt.com/*

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
