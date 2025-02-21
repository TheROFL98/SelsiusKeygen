#include <iostream>
#include <windows.h>
#include <sstream>
#include <iomanip>
#pragma warning(disable : 4996)
#define BYTE4(x) (*((unsigned char*)&(x) + 3))
#define LOBYTE(x)   ((uint8_t)((x) & 0xFF))
#define BYTE1(x)    ((uint8_t)(((x) >> 8) & 0xFF))
#define BYTE2(x)    ((uint8_t)(((x) >> 16) & 0xFF))
#define HIBYTE(x)   ((uint8_t)(((x) >> 24) & 0xFF))

std::string intToHex(int number) {
    std::stringstream ss;
    ss << std::setfill('0') << std::setw(8) << std::hex << std::uppercase << number;
    return ss.str();
}

DWORD * __cdecl sub_897D81C(DWORD * a1, int* a2)
{
    DWORD * result; // eax
    int v3; // [esp+0h] [ebp-10h]
    unsigned int v4; // [esp+0h] [ebp-10h]
    int v5; // [esp+0h] [ebp-10h]
    unsigned int v6; // [esp+0h] [ebp-10h]
    int v7; // [esp+0h] [ebp-10h]
    unsigned int v8; // [esp+0h] [ebp-10h]
    int v9; // [esp+0h] [ebp-10h]
    unsigned int v10; // [esp+0h] [ebp-10h]
    int v11; // [esp+0h] [ebp-10h]
    unsigned int v12; // [esp+0h] [ebp-10h]
    int v13; // [esp+0h] [ebp-10h]
    unsigned int v14; // [esp+0h] [ebp-10h]
    int v15; // [esp+0h] [ebp-10h]
    unsigned int v16; // [esp+0h] [ebp-10h]
    int v17; // [esp+0h] [ebp-10h]
    unsigned int v18; // [esp+0h] [ebp-10h]
    int v19; // [esp+0h] [ebp-10h]
    unsigned int v20; // [esp+0h] [ebp-10h]
    int v21; // [esp+0h] [ebp-10h]
    unsigned int v22; // [esp+0h] [ebp-10h]
    int v23; // [esp+0h] [ebp-10h]
    unsigned int v24; // [esp+0h] [ebp-10h]
    int v25; // [esp+0h] [ebp-10h]
    unsigned int v26; // [esp+0h] [ebp-10h]
    int v27; // [esp+0h] [ebp-10h]
    unsigned int v28; // [esp+0h] [ebp-10h]
    int v29; // [esp+0h] [ebp-10h]
    unsigned int v30; // [esp+0h] [ebp-10h]
    int v31; // [esp+0h] [ebp-10h]
    unsigned int v32; // [esp+0h] [ebp-10h]
    int v33; // [esp+0h] [ebp-10h]
    unsigned int v34; // [esp+0h] [ebp-10h]
    int v35; // [esp+0h] [ebp-10h]
    int v36; // [esp+4h] [ebp-Ch]
    unsigned int v37; // [esp+4h] [ebp-Ch]
    int v38; // [esp+4h] [ebp-Ch]
    unsigned int v39; // [esp+4h] [ebp-Ch]
    int v40; // [esp+4h] [ebp-Ch]
    unsigned int v41; // [esp+4h] [ebp-Ch]
    int v42; // [esp+4h] [ebp-Ch]
    unsigned int v43; // [esp+4h] [ebp-Ch]
    int v44; // [esp+4h] [ebp-Ch]
    unsigned int v45; // [esp+4h] [ebp-Ch]
    int v46; // [esp+4h] [ebp-Ch]
    unsigned int v47; // [esp+4h] [ebp-Ch]
    int v48; // [esp+4h] [ebp-Ch]
    unsigned int v49; // [esp+4h] [ebp-Ch]
    int v50; // [esp+4h] [ebp-Ch]
    unsigned int v51; // [esp+4h] [ebp-Ch]
    int v52; // [esp+4h] [ebp-Ch]
    unsigned int v53; // [esp+4h] [ebp-Ch]
    int v54; // [esp+4h] [ebp-Ch]
    unsigned int v55; // [esp+4h] [ebp-Ch]
    int v56; // [esp+4h] [ebp-Ch]
    unsigned int v57; // [esp+4h] [ebp-Ch]
    int v58; // [esp+4h] [ebp-Ch]
    unsigned int v59; // [esp+4h] [ebp-Ch]
    int v60; // [esp+4h] [ebp-Ch]
    unsigned int v61; // [esp+4h] [ebp-Ch]
    int v62; // [esp+4h] [ebp-Ch]
    unsigned int v63; // [esp+4h] [ebp-Ch]
    int v64; // [esp+4h] [ebp-Ch]
    unsigned int v65; // [esp+4h] [ebp-Ch]
    int v66; // [esp+4h] [ebp-Ch]
    unsigned int v67; // [esp+4h] [ebp-Ch]
    int v68; // [esp+4h] [ebp-Ch]
    int v69; // [esp+8h] [ebp-8h]
    unsigned int v70; // [esp+8h] [ebp-8h]
    int v71; // [esp+8h] [ebp-8h]
    unsigned int v72; // [esp+8h] [ebp-8h]
    int v73; // [esp+8h] [ebp-8h]
    unsigned int v74; // [esp+8h] [ebp-8h]
    int v75; // [esp+8h] [ebp-8h]
    unsigned int v76; // [esp+8h] [ebp-8h]
    int v77; // [esp+8h] [ebp-8h]
    unsigned int v78; // [esp+8h] [ebp-8h]
    int v79; // [esp+8h] [ebp-8h]
    unsigned int v80; // [esp+8h] [ebp-8h]
    int v81; // [esp+8h] [ebp-8h]
    unsigned int v82; // [esp+8h] [ebp-8h]
    int v83; // [esp+8h] [ebp-8h]
    unsigned int v84; // [esp+8h] [ebp-8h]
    int v85; // [esp+8h] [ebp-8h]
    unsigned int v86; // [esp+8h] [ebp-8h]
    int v87; // [esp+8h] [ebp-8h]
    unsigned int v88; // [esp+8h] [ebp-8h]
    int v89; // [esp+8h] [ebp-8h]
    unsigned int v90; // [esp+8h] [ebp-8h]
    int v91; // [esp+8h] [ebp-8h]
    unsigned int v92; // [esp+8h] [ebp-8h]
    int v93; // [esp+8h] [ebp-8h]
    unsigned int v94; // [esp+8h] [ebp-8h]
    int v95; // [esp+8h] [ebp-8h]
    unsigned int v96; // [esp+8h] [ebp-8h]
    int v97; // [esp+8h] [ebp-8h]
    unsigned int v98; // [esp+8h] [ebp-8h]
    int v99; // [esp+8h] [ebp-8h]
    unsigned int v100; // [esp+8h] [ebp-8h]
    unsigned int v101; // [esp+Ch] [ebp-4h]
    int v102; // [esp+Ch] [ebp-4h]
    unsigned int v103; // [esp+Ch] [ebp-4h]
    int v104; // [esp+Ch] [ebp-4h]
    unsigned int v105; // [esp+Ch] [ebp-4h]
    int v106; // [esp+Ch] [ebp-4h]
    unsigned int v107; // [esp+Ch] [ebp-4h]
    int v108; // [esp+Ch] [ebp-4h]
    unsigned int v109; // [esp+Ch] [ebp-4h]
    int v110; // [esp+Ch] [ebp-4h]
    unsigned int v111; // [esp+Ch] [ebp-4h]
    int v112; // [esp+Ch] [ebp-4h]
    unsigned int v113; // [esp+Ch] [ebp-4h]
    int v114; // [esp+Ch] [ebp-4h]
    unsigned int v115; // [esp+Ch] [ebp-4h]
    int v116; // [esp+Ch] [ebp-4h]
    unsigned int v117; // [esp+Ch] [ebp-4h]
    int v118; // [esp+Ch] [ebp-4h]
    unsigned int v119; // [esp+Ch] [ebp-4h]
    int v120; // [esp+Ch] [ebp-4h]
    unsigned int v121; // [esp+Ch] [ebp-4h]
    int v122; // [esp+Ch] [ebp-4h]
    unsigned int v123; // [esp+Ch] [ebp-4h]
    int v124; // [esp+Ch] [ebp-4h]
    unsigned int v125; // [esp+Ch] [ebp-4h]
    int v126; // [esp+Ch] [ebp-4h]
    unsigned int v127; // [esp+Ch] [ebp-4h]
    int v128; // [esp+Ch] [ebp-4h]
    unsigned int v129; // [esp+Ch] [ebp-4h]
    int v130; // [esp+Ch] [ebp-4h]
    unsigned int v131; // [esp+Ch] [ebp-4h]
    int v132; // [esp+Ch] [ebp-4h]

    v69 = a1[1];
    v36 = a1[2];
    v3 = a1[3];
    v101 = *a1 + *a2 + (v3 & ~v69 | v36 & v69) - 680876936;
    v102 = v69 + ((v101 >> 25) | (v101 << 7));
    v4 = v3 + a2[1] + (v36 & ~v102 | v69 & v102) - 389564586;
    v5 = v102 + ((v4 >> 20) | (v4 << 12));
    v37 = v36 + a2[2] + (v69 & ~v5 | v102 & v5) + 606105819;
    v38 = v5 + ((v37 >> 15) | (v37 << 17));
    v70 = v69 + a2[3] + (v102 & ~v38 | v5 & v38) - 1044525330;
    v71 = v38 + ((v70 >> 10) | (v70 << 22));
    v103 = v102 + a2[4] + (v5 & ~v71 | v38 & v71) - 176418897;
    v104 = v71 + ((v103 >> 25) | (v103 << 7));
    v6 = v5 + a2[5] + (v38 & ~v104 | v71 & v104) + 1200080426;
    v7 = v104 + ((v6 >> 20) | (v6 << 12));
    v39 = v38 + a2[6] + (v71 & ~v7 | v104 & v7) - 1473231341;
    v40 = v7 + ((v39 >> 15) | (v39 << 17));
    v72 = v71 + a2[7] + (v104 & ~v40 | v7 & v40) - 45705983;
    v73 = v40 + ((v72 >> 10) | (v72 << 22));
    v105 = v104 + a2[8] + (v7 & ~v73 | v40 & v73) + 1770035416;
    v106 = v73 + ((v105 >> 25) | (v105 << 7));
    v8 = v7 + a2[9] + (v40 & ~v106 | v73 & v106) - 1958414417;
    v9 = v106 + ((v8 >> 20) | (v8 << 12));
    v41 = v40 + a2[10] + (v73 & ~v9 | v106 & v9) - 42063;
    v42 = v9 + ((v41 >> 15) | (v41 << 17));
    v74 = v73 + a2[11] + (v106 & ~v42 | v9 & v42) - 1990404162;
    v75 = v42 + ((v74 >> 10) | (v74 << 22));
    v107 = v106 + a2[12] + (v9 & ~v75 | v42 & v75) + 1804603682;
    v108 = v75 + ((v107 >> 25) | (v107 << 7));
    v10 = v9 + a2[13] + (v42 & ~v108 | v75 & v108) - 40341101;
    v11 = v108 + ((v10 >> 20) | (v10 << 12));
    v43 = v42 + a2[14] + (v75 & ~v11 | v108 & v11) - 1502002290;
    v44 = v11 + ((v43 >> 15) | (v43 << 17));
    v76 = v75 + a2[15] + (v108 & ~v44 | v11 & v44) + 1236535329;
    v77 = v44 + ((v76 >> 10) | (v76 << 22));
    v109 = v108 + a2[1] + (~v11 & v44 | v11 & v77) - 165796510;
    v110 = v77 + ((v109 >> 27) | (32 * v109));
    v12 = v11 + a2[6] + (~v44 & v77 | v44 & v110) - 1069501632;
    v13 = v110 + ((v12 >> 23) | (v12 << 9));
    v45 = v44 + a2[11] + (~v77 & v110 | v77 & v13) + 643717713;
    v46 = v13 + ((v45 >> 18) | (v45 << 14));
    v78 = v77 + *a2 + (~v110 & v13 | v110 & v46) - 373897302;
    v79 = v46 + ((v78 >> 12) | (v78 << 20));
    v111 = v110 + a2[5] + (~v13 & v46 | v13 & v79) - 701558691;
    v112 = v79 + ((v111 >> 27) | (32 * v111));
    v14 = v13 + a2[10] + (~v46 & v79 | v46 & v112) + 38016083;
    v15 = v112 + ((v14 >> 23) | (v14 << 9));
    v47 = v46 + a2[15] + (~v79 & v112 | v79 & v15) - 660478335;
    v48 = v15 + ((v47 >> 18) | (v47 << 14));
    v80 = v79 + a2[4] + (~v112 & v15 | v112 & v48) - 405537848;
    v81 = v48 + ((v80 >> 12) | (v80 << 20));
    v113 = v112 + a2[9] + (~v15 & v48 | v15 & v81) + 568446438;
    v114 = v81 + ((v113 >> 27) | (32 * v113));
    v16 = v15 + a2[14] + (~v48 & v81 | v48 & v114) - 1019803690;
    v17 = v114 + ((v16 >> 23) | (v16 << 9));
    v49 = v48 + a2[3] + (~v81 & v114 | v81 & v17) - 187363961;
    v50 = v17 + ((v49 >> 18) | (v49 << 14));
    v82 = v81 + a2[8] + (~v114 & v17 | v114 & v50) + 1163531501;
    v83 = v50 + ((v82 >> 12) | (v82 << 20));
    v115 = v114 + a2[13] + (~v17 & v50 | v17 & v83) - 1444681467;
    v116 = v83 + ((v115 >> 27) | (32 * v115));
    v18 = v17 + a2[2] + (~v50 & v83 | v50 & v116) - 51403784;
    v19 = v116 + ((v18 >> 23) | (v18 << 9));
    v51 = v50 + a2[7] + (~v83 & v116 | v83 & v19) + 1735328473;
    v52 = v19 + ((v51 >> 18) | (v51 << 14));
    v84 = v83 + a2[12] + (~v116 & v19 | v116 & v52) - 1926607734;
    v85 = v52 + ((v84 >> 12) | (v84 << 20));
    v117 = v116 + a2[5] + (v19 ^ v52 ^ v85) - 378558;
    v118 = v85 + ((v117 >> 28) | (16 * v117));
    v20 = v19 + a2[8] + (v52 ^ v85 ^ v118) - 2022574463;
    v21 = v118 + ((v20 >> 21) | (v20 << 11));
    v53 = v52 + a2[11] + (v85 ^ v118 ^ v21) + 1839030562;
    v54 = v21 + (HIWORD(v53) | (v53 << 16));
    v86 = v85 + a2[14] + (v118 ^ v21 ^ v54) - 35309556;
    v87 = v54 + ((v86 >> 9) | (v86 << 23));
    v119 = v118 + a2[1] + (v21 ^ v54 ^ v87) - 1530992060;
    v120 = v87 + ((v119 >> 28) | (16 * v119));
    v22 = v21 + a2[4] + (v54 ^ v87 ^ v120) + 1272893353;
    v23 = v120 + ((v22 >> 21) | (v22 << 11));
    v55 = v54 + a2[7] + (v87 ^ v120 ^ v23) - 155497632;
    v56 = v23 + (HIWORD(v55) | (v55 << 16));
    v88 = v87 + a2[10] + (v120 ^ v23 ^ v56) - 1094730640;
    v89 = v56 + ((v88 >> 9) | (v88 << 23));
    v121 = v120 + a2[13] + (v23 ^ v56 ^ v89) + 681279174;
    v122 = v89 + ((v121 >> 28) | (16 * v121));
    v24 = v23 + *a2 + (v56 ^ v89 ^ v122) - 358537222;
    v25 = v122 + ((v24 >> 21) | (v24 << 11));
    v57 = v56 + a2[3] + (v89 ^ v122 ^ v25) - 722521979;
    v58 = v25 + (HIWORD(v57) | (v57 << 16));
    v90 = v89 + a2[6] + (v122 ^ v25 ^ v58) + 76029189;
    v91 = v58 + ((v90 >> 9) | (v90 << 23));
    v123 = v122 + a2[9] + (v25 ^ v58 ^ v91) - 640364487;
    v124 = v91 + ((v123 >> 28) | (16 * v123));
    v26 = v25 + a2[12] + (v58 ^ v91 ^ v124) - 421815835;
    v27 = v124 + ((v26 >> 21) | (v26 << 11));
    v59 = v58 + a2[15] + (v91 ^ v124 ^ v27) + 530742520;
    v60 = v27 + (HIWORD(v59) | (v59 << 16));
    v92 = v91 + a2[2] + (v124 ^ v27 ^ v60) - 995338651;
    v93 = v60 + ((v92 >> 9) | (v92 << 23));
    v125 = v124 + *a2 + ((~v27 | v93) ^ v60) - 198630844;
    v126 = v93 + ((v125 >> 26) | (v125 << 6));
    v28 = v27 + a2[7] + ((~v60 | v126) ^ v93) + 1126891415;
    v29 = v126 + ((v28 >> 22) | (v28 << 10));
    v61 = v60 + a2[14] + ((~v93 | v29) ^ v126) - 1416354905;
    v62 = v29 + ((v61 >> 17) | (v61 << 15));
    v94 = v93 + a2[5] + ((~v126 | v62) ^ v29) - 57434055;
    v95 = v62 + ((v94 >> 11) | (v94 << 21));
    v127 = v126 + a2[12] + ((~v29 | v95) ^ v62) + 1700485571;
    v128 = v95 + ((v127 >> 26) | (v127 << 6));
    v30 = v29 + a2[3] + ((~v62 | v128) ^ v95) - 1894986606;
    v31 = v128 + ((v30 >> 22) | (v30 << 10));
    v63 = v62 + a2[10] + ((~v95 | v31) ^ v128) - 1051523;
    v64 = v31 + ((v63 >> 17) | (v63 << 15));
    v96 = v95 + a2[1] + ((~v128 | v64) ^ v31) - 2054922799;
    v97 = v64 + ((v96 >> 11) | (v96 << 21));
    v129 = v128 + a2[8] + ((~v31 | v97) ^ v64) + 1873313359;
    v130 = v97 + ((v129 >> 26) | (v129 << 6));
    v32 = v31 + a2[15] + ((~v64 | v130) ^ v97) - 30611744;
    v33 = v130 + ((v32 >> 22) | (v32 << 10));
    v65 = v64 + a2[6] + ((~v97 | v33) ^ v130) - 1560198380;
    v66 = v33 + ((v65 >> 17) | (v65 << 15));
    v98 = v97 + a2[13] + ((~v130 | v66) ^ v33) + 1309151649;
    v99 = v66 + ((v98 >> 11) | (v98 << 21));
    v131 = v130 + a2[4] + ((~v33 | v99) ^ v66) - 145523070;
    v132 = v99 + ((v131 >> 26) | (v131 << 6));
    v34 = v33 + a2[11] + ((~v66 | v132) ^ v99) - 1120210379;
    v35 = v132 + ((v34 >> 22) | (v34 << 10));
    v67 = v66 + a2[2] + ((~v99 | v35) ^ v132) + 718787259;
    v68 = v35 + ((v67 >> 17) | (v67 << 15));
    v100 = v99 + a2[9] + ((~v132 | v68) ^ v35) - 343485551;
    *a1 += v132;
    a1[1] += v68 + ((v100 >> 11) | (v100 << 21));
    a1[2] += v68;
    result = a1;
    a1[3] += v35;
    return result;
}

DWORD * __cdecl sub_897D57C(DWORD * a1, BYTE * a2, unsigned int a3)
{
    DWORD * result;
    unsigned int v5;
    int v6[16];
    unsigned int v7;
    unsigned int v8;

    v8 = (*a1 >> 3) & 0x3F;
    if (*a1 + 8 * a3 < *a1)
        ++a1[1];
    a1[0] += 8 * a3;
    result = a1;
    a1[1] += a3 >> 29;
    while (a3--)
    {
        *((BYTE*)a1 + v8 + 24) = *a2;
        result = (DWORD *)++v8;
        ++a2;
        if (v8 == 64)
        {
            v5 = 0;
            v7 = 0;
            while (v5 < 0x10)
            {
                v6[v5++] = 
                    LOBYTE(a1[v7 / 4 + 6]) |
                    (BYTE1(a1[v7 / 4 + 6]) << 8) |
                    (BYTE2(a1[v7 / 4 + 6]) << 16) |
                    (HIBYTE(a1[v7 / 4 + 6]) << 24);

                v7 += 4;
            }
            result = (DWORD *)sub_897D81C(a1 + 2, v6);
            v8 = 0;
        }
    }
    return result;
}

unsigned int* __cdecl sub_897D6A2(DWORD * a1)
{
    unsigned int* result;
    unsigned int v2;
    unsigned int v3;
    unsigned int v4;
    int v5[17];
    unsigned int v6;
    int v7;

    unsigned char byte_8983CA0[] =
    {
      0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00
    };

    v5[14] = *a1;
    v5[15] = a1[1];
    v7 = (*a1 >> 3) & 0x3F;
    if (v7 >= 56)
        v2 = 120 - v7;
    else
        v2 = 56 - v7;
    v5[16] = v2;
    sub_897D57C(a1, byte_8983CA0, v2);
    v3 = 0;
    v6 = 0;
    while (v3 < 0xE)
    {
        v5[v3++] =
            LOBYTE(a1[v6 / 4 + 6]) |
            (BYTE1(a1[v6 / 4 + 6]) << 8) |
            (BYTE2(a1[v6 / 4 + 6]) << 16) |
            (HIBYTE(a1[v6 / 4 + 6]) << 24);

        v6 += 4;
    }
    result = (unsigned int*)sub_897D81C(a1 + 2, v5);
    v4 = 0;
    v6 = 0;
    while (v4 < 4)
    {

        std::string fullA1V4 = intToHex(a1[v4 + 2]);
        std::string fullA1V6 = intToHex(a1[v6 / 4 + 22]);

        fullA1V6.replace(6, 2, fullA1V4.substr(6,2));
        fullA1V6.replace(2, 2, fullA1V4.substr(2, 2));
        fullA1V6.replace(0, 2, fullA1V4.substr(0, 2));

        a1[v6 / 4 + 22] = std::stoul(fullA1V6, nullptr, 16);

        result = (unsigned int*)++v4;
        v6 += 4;
    }
    return result;
}

DWORD * __cdecl sub_897D53C(DWORD* a1)
{
    DWORD* result;

    a1[1] = 0;
    *a1 = 0;
    a1[2] = 0x67452301;
    result = a1;
    a1[3] = 0xEFCDAB89;
    a1[4] = 0x98BADCFE;
    a1[5] = 0x10325476;

    return result;
}

char __cdecl sub_897E982(unsigned char * a1, unsigned int a2, unsigned int a3)
{
    char temp;
    temp = a1[a2];
    a1[a2] = a1[a3];
    a1[a3] = temp;

    return temp;
}

int __cdecl sub_897E84E(unsigned char *a1, unsigned int a2, unsigned char * a3)
{
    unsigned int v3;
    int result;
    __int16 i;
    unsigned __int8 v6;
    unsigned __int8 v7;

    v7 = (unsigned char)a3[256];
    v6 = (unsigned char)a3[257];
    for (i = 0; i < a2; ++i)
    {
        v3 = (v6 + a3[++v7]);
        v6 = (BYTE4(v3) ^ ((BYTE4(v3) ^ v3) - BYTE4(v3))) - BYTE4(v3);
        sub_897E982(a3, v7, v6);
        a1[i] ^= (a3[(unsigned __int8)(a3[v6] + a3[v7])]);
    }
    a3[256] = v7;
    result = (int)a3;
    a3[257] = v6;
    return result;
}

unsigned char *  __cdecl sub_431E75F(unsigned int a1[], int a2, unsigned char * a3)
{
    unsigned char * result;
    unsigned int v4;
    unsigned char v5;
    unsigned char v6;
    unsigned int j;

    v6 = 0;
    v5 = 0;
    for (j = 0; ; ++j)
    {
        result = a3;
        if (j >= 256)
            break;
        v4 = (v5 + a3[j] + a1[v6]);
        v5 = (BYTE4(v4) ^ ((BYTE4(v4) ^ v4) - BYTE4(v4))) - BYTE4(v4);
        sub_897E982(a3, j, v5);
        v6 = ++v6 % a2;
    }
    return result;
}

unsigned char * __cdecl sub_431D3F2(char* Str)
{
    int i;
    unsigned char Destination[500];

    unsigned char v4[260];
    for (i = 0; i < 256; ++i)
        v4[i] = i;
    
    v4[256] = 0;
    v4[257] = 0;

    size_t v5;

    unsigned char Buffer[40];

    unsigned int magic1[] =
    {
      0x04, 0x45, 0x13, 0x02, 0x13, 0x23, 0xD2, 0xDB, 0x9A, 0xD3,
      0xDB, 0xA3, 0xDA, 0xE2, 0x23, 0x02, 0x22, 0x05, 0x91, 0xD3,
      0xD3, 0x03, 0x53, 0x00
    };

    DWORD magic2[26] = { 0 };

    v5 = strlen(Str);
    if (v5 > 0x1F4)
        return 0;
    memcpy(Destination, Str, 500);
    sub_431E75F(magic1, 24, v4);
    sub_897E84E(Destination, v5, v4);
    sub_897D53C(magic2);
    sub_897D57C(magic2, Destination, v5);
    sub_897D6A2(magic2);

    for (i = 0; i < 8; ++i)
        sprintf((char*)&Buffer + 2 * i, "%02.2X", *((unsigned __int8*)&magic2[22] + 2 * i));
    std::cout << Buffer;
    return Buffer;
}

int main()
{
    int choice = 0;
    unsigned int selStaNum = 0;
    unsigned int accPorNum = 0;

    while (choice < 1 || choice > 3)
    {
        system("cls");
        std::cout << "Selsius CallManager Version 2 Keygen\nMade with love by TriTech, Inc.\n\n" <<
            "Select the type of license you wish to generate.\n\n" <<
            "1.) Selsius Station\n" <<
            "2.) Access Port\n" <<
            "3.) Selsius Station & Access Port\n\n" <<
            "Enter your option: ";

        std::cin >> choice;

        if (choice == 1 || choice == 3) {
            while (selStaNum < 1 || selStaNum > 2147483647) {
                std::cout << "Enter the number of Selsius Station licenses you wish to generate (from 1 to signed 32-bit integer limit): ";
                std::cin >> selStaNum;
                std::cin.ignore();
                std::cin.clear();
                if (selStaNum < 1 || selStaNum > 2147483647) {
                    std::cout << "\nYou have entered an invalid number.\n";
                }
            }
        }

        if (choice == 2 || choice == 3) {
            while (accPorNum < 1 || accPorNum > 2147483647) {
                std::cout << "Enter the number of Access Port licenses you wish to generate (from 1 to signed 32-bit integer limit): ";
                std::cin >> accPorNum;
                std::cin.ignore();
                std::cin.clear();
                if (accPorNum < 1 || accPorNum > 2147483647) {
                    std::cout << "\nYou have entered an invalid number.\n";
                }
            }
        }

        if (choice < 1 || choice > 3) {
            std::cout << "\nYou have entered an invalid option.\n";
            system("pause");
            std::cin.ignore();
            std::cin.clear();
        }
    }

    std::stringstream license;
    license << "02N-Q";

    srand(static_cast<unsigned int>(time(0)));
    int serial = rand() % 10000000;
    char serialStr[9];
    sprintf(serialStr, "%08d", serial);
    license << serialStr << "-";

    switch (choice) {
    case 1:
        license << "S" << selStaNum;
        break;
    case 2:
        license << "T" << accPorNum;
        break;
    case 3:
        license << "S" << selStaNum << "T" << accPorNum;
        break;
    }

    std::cout << "\nThis is your license:\n" << license.str()
        << "\n\nYou will need the following key to use this:\n";
    sub_431D3F2((char*)license.str().c_str());
    std::cout << "\n\nEnjoy using CallManager!";
}