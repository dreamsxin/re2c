/* Generated by re2c */
digraph re2c {
0 -> INITIAL [label="state=INITIAL"]
0 -> ST_OFFSET [label="state=ST_OFFSET"]
0 -> ST_SECTION_VALUE [label="state=ST_SECTION_VALUE"]
0 -> ST_VALUE [label="state=ST_VALUE"]
0 -> ST_SECTION_RAW [label="state=ST_SECTION_RAW"]
0 -> ST_DOUBLE_QUOTES [label="state=ST_DOUBLE_QUOTES"]
0 -> ST_VARNAME [label="state=ST_VARNAME"]
0 -> ST_RAW [label="state=ST_RAW"]
INITIAL -> 2
2 -> 3 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][#][%]['][*-:][<][>-E][G-M][P-S][U-X][Z][\\-0x5D][_-e][g-m][p-s][u-x][z][0x7F-0xFF]"]
2 -> 6 [label="[0x09]"]
2 -> 9 [label="[0x0A]"]
2 -> 11 [label="[0x0D]"]
2 -> 12 [label="[ ]"]
2 -> 14 [label="[!-\"][$][&][(-)][^][{-~]"]
2 -> 16 [label="[;]"]
2 -> 18 [label="[=]"]
2 -> 21 [label="[F][f]"]
2 -> 22 [label="[N][n]"]
2 -> 23 [label="[O][o]"]
2 -> 24 [label="[T][t]"]
2 -> 25 [label="[Y][y]"]
2 -> 26 [label="[[]"]
3 -> 4
4 -> 3 [label="[0x00-0x08][0x0B-0x0C][0x0E- ][#][%]['][*-:][<][>-Z][\\-0x5D][_-z][0x7F-0xFF]"]
4 -> 5 [label="[0x09-0x0A][0x0D][!-\"][$][&][(-)][;][=][^][{-~]"]
4 -> 28 [label="[[]"]
5 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:481"]
6 -> 7
7 -> 8 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!-:][<][>-0xFF]"]
7 -> 6 [label="[0x09][ ]"]
7 -> 9 [label="[0x0A]"]
7 -> 11 [label="[0x0D]"]
7 -> 16 [label="[;]"]
7 -> 18 [label="[=]"]
8 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:627"]
9 -> 10
10 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:632"]
11 -> 10 [label="[0x00-0x09][0x0B-0xFF]"]
11 -> 9 [label="[0x0A]"]
12 -> 13
13 -> 3 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][#][%]['][*-:][<][>-Z][\\-0x5D][_-z][0x7F-0xFF]"]
13 -> 6 [label="[0x09]"]
13 -> 9 [label="[0x0A]"]
13 -> 11 [label="[0x0D]"]
13 -> 12 [label="[ ]"]
13 -> 5 [label="[!-\"][$][&][(-)][^][{-~]"]
13 -> 16 [label="[;]"]
13 -> 18 [label="[=]"]
13 -> 28 [label="[[]"]
14 -> 15
15 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:555"]
16 -> 17
17 -> 16 [label="[0x00-0x09][0x0B-0x0C][0x0E-0xFF]"]
17 -> 31 [label="[0x0A]"]
17 -> 33 [label="[0x0D]"]
18 -> 19
19 -> 20 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
19 -> 18 [label="[0x09][ ]"]
20 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:491"]
21 -> 4 [label="[0x00-@][B-`][b-0xFF]"]
21 -> 34 [label="[A][a]"]
22 -> 4 [label="[0x00-N][P-T][V-n][p-t][v-0xFF]"]
22 -> 35 [label="[O][o]"]
22 -> 37 [label="[U][u]"]
23 -> 4 [label="[0x00-E][G-M][O-e][g-m][o-0xFF]"]
23 -> 38 [label="[F][f]"]
23 -> 39 [label="[N][n]"]
24 -> 4 [label="[0x00-Q][S-q][s-0xFF]"]
24 -> 42 [label="[R][r]"]
25 -> 4 [label="[0x00-D][F-d][f-0xFF]"]
25 -> 43 [label="[E][e]"]
26 -> 27
27 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:406"]
28 -> 29
29 -> 30 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
29 -> 28 [label="[0x09][ ]"]
30 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:431"]
31 -> 32
32 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:637"]
33 -> 32 [label="[0x00-0x09][0x0B-0xFF]"]
33 -> 31 [label="[0x0A]"]
34 -> 4 [label="[0x00-K][M-k][m-0xFF]"]
34 -> 44 [label="[L][l]"]
35 -> 4 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][#][%]['][*-:][<][>-M][O-0x5D][_-m][o-z][0x7F-0xFF]"]
35 -> 45 [label="[0x09]"]
35 -> 36 [label="[0x0A][0x0D][!-\"][$][&][(-)][;][=][^][{-~]"]
35 -> 47 [label="[ ]"]
35 -> 49 [label="[N][n]"]
36 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:473"]
37 -> 4 [label="[0x00-K][M-k][m-0xFF]"]
37 -> 50 [label="[L][l]"]
38 -> 4 [label="[0x00-E][G-e][g-0xFF]"]
38 -> 47 [label="[F][f]"]
39 -> 40
40 -> 3 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][#][%]['][*-:][<][>-Z][\\-0x5D][_-z][0x7F-0xFF]"]
40 -> 51 [label="[0x09]"]
40 -> 41 [label="[0x0A][0x0D][!-\"][$][&][(-)][;][=][^][{-~]"]
40 -> 39 [label="[ ]"]
40 -> 28 [label="[[]"]
41 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:469"]
42 -> 4 [label="[0x00-T][V-t][v-0xFF]"]
42 -> 53 [label="[U][u]"]
43 -> 4 [label="[0x00-R][T-r][t-0xFF]"]
43 -> 39 [label="[S][s]"]
44 -> 4 [label="[0x00-R][T-r][t-0xFF]"]
44 -> 49 [label="[S][s]"]
45 -> 46
46 -> 36 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
46 -> 45 [label="[0x09][ ]"]
47 -> 48
48 -> 3 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][#][%]['][*-:][<][>-Z][\\-0x5D][_-z][0x7F-0xFF]"]
48 -> 45 [label="[0x09]"]
48 -> 36 [label="[0x0A][0x0D][!-\"][$][&][(-)][;][=][^][{-~]"]
48 -> 47 [label="[ ]"]
48 -> 28 [label="[[]"]
49 -> 4 [label="[0x00-D][F-d][f-0xFF]"]
49 -> 47 [label="[E][e]"]
50 -> 4 [label="[0x00-K][M-k][m-0xFF]"]
50 -> 54 [label="[L][l]"]
51 -> 52
52 -> 41 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
52 -> 51 [label="[0x09][ ]"]
53 -> 4 [label="[0x00-D][F-d][f-0xFF]"]
53 -> 39 [label="[E][e]"]
54 -> 55
55 -> 3 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][#][%]['][*-:][<][>-Z][\\-0x5D][_-z][0x7F-0xFF]"]
55 -> 57 [label="[0x09]"]
55 -> 56 [label="[0x0A][0x0D][!-\"][$][&][(-)][;][=][^][{-~]"]
55 -> 54 [label="[ ]"]
55 -> 28 [label="[[]"]
56 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:477"]
57 -> 58
58 -> 56 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
58 -> 57 [label="[0x09][ ]"]
ST_DOUBLE_QUOTES -> 60
60 -> 61 [label="[0x00-!][#][%-0xFF]"]
60 -> 63 [label="[\"]"]
60 -> 66 [label="[$]"]
61 -> 62
62 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:587"]
63 -> 64
64 -> 65 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
64 -> 63 [label="[0x09][ ]"]
65 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:582"]
66 -> 62 [label="[0x00-z][|-0xFF]"]
66 -> 67 [label="[{]"]
67 -> 68
68 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:449"]
ST_OFFSET -> 70
70 -> 71 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!][#][%-&][(-,][/][:][<-@][[][^][`][{-0xFF]"]
70 -> 74 [label="[0x09][ ]"]
70 -> 76 [label="[0x0A][0x0D][;]"]
70 -> 78 [label="[\"]"]
70 -> 80 [label="[$]"]
70 -> 81 [label="[']"]
70 -> 82 [label="[--.]"]
70 -> 83 [label="[0-9]"]
70 -> 86 [label="[A-Z][_][a-z]"]
70 -> 89 [label="[\\]"]
70 -> 90 [label="[0x5D]"]
71 -> 72
72 -> 71 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-:][<-[][^-0xFF]"]
72 -> 73 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
72 -> 92 [label="[$]"]
72 -> 89 [label="[\\]"]
73 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:573"]
74 -> 75
75 -> 71 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!][#][%-&][(-:][<-[][^-0xFF]"]
75 -> 74 [label="[0x09][ ]"]
75 -> 73 [label="[0x0A][0x0D]['][;]"]
75 -> 78 [label="[\"]"]
75 -> 92 [label="[$]"]
75 -> 89 [label="[\\]"]
75 -> 90 [label="[0x5D]"]
76 -> 77
77 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:648"]
78 -> 79
79 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:577"]
80 -> 71 [label="[0x01-[][0x5D-z][|-0xFF]"]
80 -> 77 [label="[0x00]"]
80 -> 94 [label="[\\]"]
80 -> 96 [label="[{]"]
81 -> 98 [label="[0x00-&][(-0xFF]"]
81 -> 77 [label="[']"]
82 -> 72 [label="[0x00-/][:-0xFF]"]
82 -> 100 [label="[0-9]"]
83 -> 84
84 -> 71 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(--][/][:][<-[][^-0xFF]"]
84 -> 85 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
84 -> 92 [label="[$]"]
84 -> 100 [label="[.]"]
84 -> 83 [label="[0-9]"]
84 -> 89 [label="[\\]"]
85 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:551"]
86 -> 87
87 -> 71 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-/][:][<-@][[][^][`][{-0xFF]"]
87 -> 88 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
87 -> 92 [label="[$]"]
87 -> 86 [label="[0-9][A-Z][_][a-z]"]
87 -> 89 [label="[\\]"]
88 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:547"]
89 -> 71
90 -> 91
91 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:444"]
92 -> 71 [label="[0x01-[][0x5D-z][|-0xFF]"]
92 -> 93 [label="[0x00][{]"]
92 -> 94 [label="[\\]"]
93 -> 73 [label="yyaccept=0"]
93 -> 85 [label="yyaccept=1"]
93 -> 88 [label="yyaccept=2"]
94 -> 95
95 -> 71 [label="[0x00-#][%-[][0x5D-0xFF]"]
95 -> 94 [label="[$][\\]"]
96 -> 97
97 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:449"]
98 -> 99
99 -> 98 [label="[0x00-&][(-0xFF]"]
99 -> 102 [label="[']"]
100 -> 101
101 -> 71 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-/][:][<-[][^-0xFF]"]
101 -> 85 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
101 -> 92 [label="[$]"]
101 -> 100 [label="[0-9]"]
101 -> 89 [label="[\\]"]
102 -> 103
103 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:416"]
ST_RAW -> 105
105 -> 108 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][!-:][<-0xFF]"]
105 -> 106 [label="[0x00]"]
105 -> 110 [label="[0x09][ ]"]
105 -> 111 [label="[0x0A]"]
105 -> 113 [label="[0x0D]"]
105 -> 114 [label="[;]"]
106 -> 107
107 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:643"]
108 -> 109
109 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:500"]
110 -> 109 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!-:][<-0xFF]"]
110 -> 117 [label="[0x09-0x0A][0x0D][ ][;]"]
111 -> 112
112 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:541"]
113 -> 112 [label="[0x00-0x09][0x0B-0xFF]"]
113 -> 111 [label="[0x0A]"]
114 -> 115
115 -> 114 [label="[0x00-0x09][0x0B-0x0C][0x0E-0xFF]"]
115 -> 119 [label="[0x0A]"]
115 -> 121 [label="[0x0D]"]
116 -> 117
117 -> 118 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!-:][<-0xFF]"]
117 -> 116 [label="[0x09][ ]"]
117 -> 111 [label="[0x0A]"]
117 -> 113 [label="[0x0D]"]
117 -> 114 [label="[;]"]
118 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:627"]
119 -> 120
120 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:637"]
121 -> 120 [label="[0x00-0x09][0x0B-0xFF]"]
121 -> 119 [label="[0x0A]"]
ST_SECTION_RAW -> 123
123 -> 124 [label="[0x00-0x09][0x0B-0x0C][0x0E-\\][^-0xFF]"]
123 -> 127 [label="[0x0A][0x0D]"]
123 -> 129 [label="[0x5D]"]
124 -> 125
125 -> 124 [label="[0x00-0x09][0x0B-0x0C][0x0E-\\][^-0xFF]"]
125 -> 126 [label="[0x0A][0x0D][0x5D]"]
126 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:537"]
127 -> 128
128 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:648"]
129 -> 130
130 -> 131 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!-0xFF]"]
130 -> 129 [label="[0x09][ ]"]
130 -> 132 [label="[0x0A]"]
130 -> 133 [label="[0x0D]"]
131 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:425"]
132 -> 131
133 -> 131 [label="[0x00-0x09][0x0B-0xFF]"]
133 -> 132 [label="[0x0A]"]
ST_SECTION_VALUE -> 135
135 -> 136 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!][#][%-&][(-,][/][:][<-@][[][^][`][{-0xFF]"]
135 -> 139 [label="[0x09][ ]"]
135 -> 141 [label="[0x0A][0x0D][;]"]
135 -> 143 [label="[\"]"]
135 -> 145 [label="[$]"]
135 -> 146 [label="[']"]
135 -> 147 [label="[--.]"]
135 -> 148 [label="[0-9]"]
135 -> 151 [label="[A-Z][_][a-z]"]
135 -> 154 [label="[\\]"]
135 -> 155 [label="[0x5D]"]
136 -> 137
137 -> 136 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-:][<-[][^-0xFF]"]
137 -> 138 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
137 -> 158 [label="[$]"]
137 -> 154 [label="[\\]"]
138 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:573"]
139 -> 140
140 -> 136 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!][#][%-&][(-:][<-[][^-0xFF]"]
140 -> 139 [label="[0x09][ ]"]
140 -> 138 [label="[0x0A][0x0D]['][;][0x5D]"]
140 -> 143 [label="[\"]"]
140 -> 158 [label="[$]"]
140 -> 154 [label="[\\]"]
141 -> 142
142 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:648"]
143 -> 144
144 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:577"]
145 -> 136 [label="[0x01-[][0x5D-z][|-0xFF]"]
145 -> 142 [label="[0x00]"]
145 -> 160 [label="[\\]"]
145 -> 162 [label="[{]"]
146 -> 164 [label="[0x00-&][(-0xFF]"]
146 -> 142 [label="[']"]
147 -> 137 [label="[0x00-/][:-0xFF]"]
147 -> 166 [label="[0-9]"]
148 -> 149
149 -> 136 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(--][/][:][<-[][^-0xFF]"]
149 -> 150 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
149 -> 158 [label="[$]"]
149 -> 166 [label="[.]"]
149 -> 148 [label="[0-9]"]
149 -> 154 [label="[\\]"]
150 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:551"]
151 -> 152
152 -> 136 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-/][:][<-@][[][^][`][{-0xFF]"]
152 -> 153 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
152 -> 158 [label="[$]"]
152 -> 151 [label="[0-9][A-Z][_][a-z]"]
152 -> 154 [label="[\\]"]
153 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:547"]
154 -> 136
155 -> 156
156 -> 157 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!-0xFF]"]
156 -> 155 [label="[0x09][ ]"]
156 -> 168 [label="[0x0A]"]
156 -> 169 [label="[0x0D]"]
157 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:425"]
158 -> 136 [label="[0x01-[][0x5D-z][|-0xFF]"]
158 -> 159 [label="[0x00][{]"]
158 -> 160 [label="[\\]"]
159 -> 138 [label="yyaccept=0"]
159 -> 150 [label="yyaccept=1"]
159 -> 153 [label="yyaccept=2"]
160 -> 161
161 -> 136 [label="[0x00-#][%-[][0x5D-0xFF]"]
161 -> 160 [label="[$][\\]"]
162 -> 163
163 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:449"]
164 -> 165
165 -> 164 [label="[0x00-&][(-0xFF]"]
165 -> 170 [label="[']"]
166 -> 167
167 -> 136 [label="[0x00-0x09][0x0B-0x0C][0x0E-!][#][%-&][(-/][:][<-[][^-0xFF]"]
167 -> 150 [label="[0x0A][0x0D][\"]['][;][0x5D]"]
167 -> 158 [label="[$]"]
167 -> 166 [label="[0-9]"]
167 -> 154 [label="[\\]"]
168 -> 157
169 -> 157 [label="[0x00-0x09][0x0B-0xFF]"]
169 -> 168 [label="[0x0A]"]
170 -> 171
171 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:416"]
ST_VALUE -> 173
173 -> 176 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#][%][*-,][/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
173 -> 174 [label="[0x00]"]
173 -> 179 [label="[0x09][ ]"]
173 -> 182 [label="[0x0A]"]
173 -> 184 [label="[0x0D]"]
173 -> 185 [label="[!][&][(-)][^][|][~]"]
173 -> 188 [label="[\"]"]
173 -> 190 [label="[$]"]
173 -> 191 [label="[']"]
173 -> 192 [label="[--.]"]
173 -> 193 [label="[0-9]"]
173 -> 196 [label="[;]"]
173 -> 198 [label="[=]"]
173 -> 200 [label="[A-E][G-M][P-S][U-X][Z][_][a-e][g-m][p-s][u-x][z]"]
173 -> 203 [label="[F][f]"]
173 -> 204 [label="[N][n]"]
173 -> 205 [label="[O][o]"]
173 -> 206 [label="[T][t]"]
173 -> 207 [label="[Y][y]"]
174 -> 175
175 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:643"]
176 -> 177
177 -> 176 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#][%][*-:][<][>-0x5D][_-{][}][0x7F-0xFF]"]
177 -> 178 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
177 -> 208 [label="[$]"]
178 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:569"]
179 -> 180
180 -> 181 [label="[0x00-0x08][0x0B-0x0C][0x0E-0x1F][!][#-:][<-0xFF]"]
180 -> 179 [label="[0x09][ ]"]
180 -> 182 [label="[0x0A]"]
180 -> 184 [label="[0x0D]"]
180 -> 188 [label="[\"]"]
180 -> 196 [label="[;]"]
181 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:623"]
182 -> 183
183 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:541"]
184 -> 183 [label="[0x00-0x09][0x0B-0xFF]"]
184 -> 182 [label="[0x0A]"]
185 -> 186
186 -> 187 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
186 -> 185 [label="[0x09][ ]"]
187 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:559"]
188 -> 189
189 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:577"]
190 -> 176 [label="[0x01-[][0x5D-z][|-0xFF]"]
190 -> 175 [label="[0x00]"]
190 -> 210 [label="[\\]"]
190 -> 211 [label="[{]"]
191 -> 213 [label="[0x00-&][(-0xFF]"]
191 -> 175 [label="[']"]
192 -> 177 [label="[0x00-/][:-0xFF]"]
192 -> 215 [label="[0-9]"]
193 -> 194
194 -> 176 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#][%][*--][/][:][<][>-0x5D][_-{][}][0x7F-0xFF]"]
194 -> 195 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
194 -> 208 [label="[$]"]
194 -> 215 [label="[.]"]
194 -> 193 [label="[0-9]"]
195 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:551"]
196 -> 197
197 -> 196 [label="[0x00-0x09][0x0B-0x0C][0x0E-0xFF]"]
197 -> 217 [label="[0x0A]"]
197 -> 219 [label="[0x0D]"]
198 -> 199
199 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:563"]
200 -> 201
201 -> 176 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#][%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
201 -> 202 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
201 -> 208 [label="[$]"]
201 -> 200 [label="[0-9][A-Z][_][a-z]"]
202 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:547"]
203 -> 177 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
203 -> 202 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
203 -> 200 [label="[0-9][B-Z][_][b-z]"]
203 -> 220 [label="[A][a]"]
204 -> 177 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
204 -> 202 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
204 -> 200 [label="[0-9][A-N][P-T][V-Z][_][a-n][p-t][v-z]"]
204 -> 221 [label="[O][o]"]
204 -> 223 [label="[U][u]"]
205 -> 177 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
205 -> 202 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
205 -> 200 [label="[0-9][A-E][G-M][O-Z][_][a-e][g-m][o-z]"]
205 -> 224 [label="[F][f]"]
205 -> 225 [label="[N][n]"]
206 -> 177 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
206 -> 202 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
206 -> 200 [label="[0-9][A-Q][S-Z][_][a-q][s-z]"]
206 -> 227 [label="[R][r]"]
207 -> 177 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
207 -> 202 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
207 -> 200 [label="[0-9][A-D][F-Z][_][a-d][f-z]"]
207 -> 228 [label="[E][e]"]
208 -> 176 [label="[0x01-[][0x5D-z][|-0xFF]"]
208 -> 209 [label="[0x00][{]"]
208 -> 210 [label="[\\]"]
209 -> 178 [label="yyaccept=0"]
209 -> 195 [label="yyaccept=1"]
209 -> 202 [label="yyaccept=2"]
209 -> 222 [label="yyaccept=3"]
209 -> 226 [label="yyaccept=4"]
209 -> 243 [label="yyaccept=5"]
210 -> 176 [label="[0x00-#][%-0xFF]"]
210 -> 229 [label="[$]"]
211 -> 212
212 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:449"]
213 -> 214
214 -> 213 [label="[0x00-&][(-0xFF]"]
214 -> 231 [label="[']"]
215 -> 216
216 -> 176 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#][%][*-/][:][<][>-0x5D][_-{][}][0x7F-0xFF]"]
216 -> 195 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
216 -> 208 [label="[$]"]
216 -> 215 [label="[0-9]"]
217 -> 218
218 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:637"]
219 -> 218 [label="[0x00-0x09][0x0B-0xFF]"]
219 -> 217 [label="[0x0A]"]
220 -> 177 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
220 -> 202 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
220 -> 200 [label="[0-9][A-K][M-Z][_][a-k][m-z]"]
220 -> 233 [label="[L][l]"]
221 -> 177 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
221 -> 222 [label="[0x00][0x0A][0x0D][!-\"][&-)][;][=][^][|][~]"]
221 -> 234 [label="[0x09][ ]"]
221 -> 200 [label="[0-9][A-M][O-Z][_][a-m][o-z]"]
221 -> 236 [label="[N][n]"]
222 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:473"]
223 -> 177 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
223 -> 202 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
223 -> 200 [label="[0-9][A-K][M-Z][_][a-k][m-z]"]
223 -> 237 [label="[L][l]"]
224 -> 177 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
224 -> 202 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
224 -> 200 [label="[0-9][A-E][G-Z][_][a-e][g-z]"]
224 -> 238 [label="[F][f]"]
225 -> 177 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
225 -> 226 [label="[0x00][0x0A][0x0D][!-\"][&-)][;][=][^][|][~]"]
225 -> 239 [label="[0x09][ ]"]
225 -> 200 [label="[0-9][A-Z][_][a-z]"]
226 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:469"]
227 -> 177 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
227 -> 202 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
227 -> 200 [label="[0-9][A-T][V-Z][_][a-t][v-z]"]
227 -> 241 [label="[U][u]"]
228 -> 177 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
228 -> 202 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
228 -> 200 [label="[0-9][A-R][T-Z][_][a-r][t-z]"]
228 -> 225 [label="[S][s]"]
229 -> 230
230 -> 176 [label="[0x01-#][%-[][0x5D-0xFF]"]
230 -> 178 [label="[0x00]"]
230 -> 229 [label="[$]"]
230 -> 210 [label="[\\]"]
231 -> 232
232 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:416"]
233 -> 177 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
233 -> 202 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
233 -> 200 [label="[0-9][A-R][T-Z][_][a-r][t-z]"]
233 -> 236 [label="[S][s]"]
234 -> 235
235 -> 222 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
235 -> 234 [label="[0x09][ ]"]
236 -> 177 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
236 -> 202 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
236 -> 200 [label="[0-9][A-D][F-Z][_][a-d][f-z]"]
236 -> 238 [label="[E][e]"]
237 -> 177 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
237 -> 202 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
237 -> 200 [label="[0-9][A-K][M-Z][_][a-k][m-z]"]
237 -> 242 [label="[L][l]"]
238 -> 177 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
238 -> 222 [label="[0x00][0x0A][0x0D][!-\"][&-)][;][=][^][|][~]"]
238 -> 234 [label="[0x09][ ]"]
238 -> 200 [label="[0-9][A-Z][_][a-z]"]
239 -> 240
240 -> 226 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
240 -> 239 [label="[0x09][ ]"]
241 -> 177 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
241 -> 202 [label="[0x00][0x09-0x0A][0x0D][ -\"][&-)][;][=][^][|][~]"]
241 -> 200 [label="[0-9][A-D][F-Z][_][a-d][f-z]"]
241 -> 225 [label="[E][e]"]
242 -> 177 [label="[0x01-0x08][0x0B-0x0C][0x0E-0x1F][#-%][*-/][:][<][>-@][[-0x5D][`][{][}][0x7F-0xFF]"]
242 -> 243 [label="[0x00][0x0A][0x0D][!-\"][&-)][;][=][^][|][~]"]
242 -> 244 [label="[0x09][ ]"]
242 -> 200 [label="[0-9][A-Z][_][a-z]"]
243 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:477"]
244 -> 245
245 -> 243 [label="[0x00-0x08][0x0A-0x1F][!-0xFF]"]
245 -> 244 [label="[0x09][ ]"]
ST_VARNAME -> 247
247 -> 248 [label="[0x00-0x08][0x0B-0x0C][0x0E- ][#][%]['][*-:][<][>-Z][\\-0x5D][_-z][0x7F-0xFF]"]
247 -> 251 [label="[0x09-0x0A][0x0D][!-\"][$][&][(-)][;][=][[][^][{-|][~]"]
247 -> 253 [label="[}]"]
248 -> 249
249 -> 248 [label="[0x00-0x08][0x0B-0x0C][0x0E- ][#][%]['][*-:][<][>-Z][\\-0x5D][_-z][0x7F-0xFF]"]
249 -> 250 [label="[0x09-0x0A][0x0D][!-\"][$][&][(-)][;][=][[][^][{-~]"]
250 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:454"]
251 -> 252
252 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:648"]
253 -> 254
254 [label="php20150211_zend_ini_scanner.c--emit-dot--flex-syntax--case-inverted.re:464"]
}
re2c: warning: line 384: column 13: escape has no effect: '\.' [-Wuseless-escape]
re2c: warning: line 384: column 32: escape has no effect: '\.' [-Wuseless-escape]
re2c: warning: line 391: column 27: escape has no effect: '\[' [-Wuseless-escape]
re2c: warning: line 392: column 11: escape has no effect: '\[' [-Wuseless-escape]
re2c: warning: line 648: unreachable rule in condition 'INITIAL' (shadowed by rules at lines 406, 481, 491, 555, 627, 632, 637) [-Wunreachable-rules]
re2c: warning: line 648: unreachable rule in condition 'ST_DOUBLE_QUOTES' (shadowed by rules at lines 582, 587) [-Wunreachable-rules]
re2c: warning: line 623: unreachable rule in condition 'ST_OFFSET' (shadowed by rule at line 573) [-Wunreachable-rules]
re2c: warning: line 648: unreachable rule in condition 'ST_RAW' (shadowed by rules at lines 500, 541, 643) [-Wunreachable-rules]
re2c: warning: line 623: unreachable rule in condition 'ST_SECTION_VALUE' (shadowed by rule at line 573) [-Wunreachable-rules]
re2c: warning: line 648: unreachable rule in condition 'ST_VALUE' (shadowed by rules at lines 541, 547, 551, 559, 563, 569, 577, 623, 643) [-Wunreachable-rules]