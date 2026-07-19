
        tailwind.config = {
            darkMode: 'class',
            theme: { extend: { colors: { primary: '#4f46e5', accent: '#3b82f6' } } }
        }
    


        function navigate(page) {
            document.querySelectorAll('.page').forEach(p => p.classList.remove('active'));
            const target = document.getElementById('page-' + page);
            if (target) target.classList.add('active'); else document.getElementById('page-404').classList.add('active');

            document.querySelectorAll('.nav-item').forEach((btn, i) => {
                btn.classList.remove('active');
                const pages = ['home', 'dashboard', 'courses', 'mycourses', 'progress', 'search', 'coursedetail', 'video', 'notepad', 'profile', 'settings', 'about', 'contact', 'login'];
                if (pages[i] === page) btn.classList.add('active');
            });
        }

        function toggleDark() {
            document.documentElement.classList.toggle('dark');
            localStorage.setItem('dark', document.documentElement.classList.contains('dark'));
        }

        if (localStorage.getItem('dark') === 'true') {
            document.documentElement.classList.add('dark');
        }

        function filterSearch() {
            const q = document.getElementById('search-input').value.toLowerCase();
            document.querySelectorAll('.search-item').forEach(item => {
                const tags = ((item.dataset.tags || '') + ' ' + item.textContent).toLowerCase();
                item.style.display = tags.includes(q) ? '' : 'none';
            });
        }

        lucide.createIcons();
    

(function () { function c() { var b = a.contentDocument || a.contentWindow.document; if (b) { var d = b.createElement('script'); d.innerHTML = "window.__CF$cv$params={r:'a1ae373be4d3edd1',t:'MTc4NDAwNzg2OS4wMDAwMDA='};var a=document.createElement('script');a.nonce='';a.src='/cdn-cgi/challenge-platform/scripts/jsd/main.js';document.getElementsByTagName('head')[0].appendChild(a);"; b.getElementsByTagName('head')[0].appendChild(d) } } if (document.body) { var a = document.createElement('iframe'); a.height = 1; a.width = 1; a.style.position = 'absolute'; a.style.top = 0; a.style.left = 0; a.style.border = 'none'; a.style.visibility = 'hidden'; document.body.appendChild(a); if ('loading' !== document.readyState) c(); else if (window.addEventListener) document.addEventListener('DOMContentLoaded', c); else { var e = document.onreadystatechange || function () { }; document.onreadystatechange = function (b) { e(b); 'loading' !== document.readyState && (document.onreadystatechange = e, c()) } } } })();