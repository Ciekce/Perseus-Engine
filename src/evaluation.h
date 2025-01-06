#pragma once

#include "BBmacros.h"
#include "Position.h"

const PScore pawnTable[2][64] = {
	{
		S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,
		S(188, 266)   ,S(147, 265)   ,S(186, 212)   ,S(192, 169)   ,S(176, 173)   ,S(119, 222)   ,S(-81, 310)   ,S(-50, 319)   ,
		S(95, 303)    ,S(120, 281)   ,S(142, 236)   ,S(136, 192)   ,S(150, 200)   ,S(204, 236)   ,S(149, 274)   ,S(107, 284)   ,
		S(89, 256)    ,S(93, 239)    ,S(99, 217)    ,S(115, 186)   ,S(127, 201)   ,S(133, 213)   ,S(97, 241)    ,S(94, 238)    ,
		S(83, 230)    ,S(78, 221)    ,S(95, 200)    ,S(104, 190)   ,S(109, 196)   ,S(112, 204)   ,S(96, 209)    ,S(94, 207)    ,
		S(85, 219)    ,S(83, 212)    ,S(90, 207)    ,S(101, 202)   ,S(112, 216)   ,S(104, 217)   ,S(118, 193)   ,S(106, 191)   ,
		S(83, 229)    ,S(81, 218)    ,S(80, 216)    ,S(90, 218)    ,S(89, 237)    ,S(126, 229)   ,S(137, 203)   ,S(107, 182)   ,
		S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,
	},
	{
		S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,
		S(127, 319)   ,S(100, 325)   ,S(174, 290)   ,S(183, 220)   ,S(178, 203)   ,S(191, 187)   ,S(80, 264)    ,S(70, 267)    ,
		S(117, 319)   ,S(171, 311)   ,S(169, 280)   ,S(151, 234)   ,S(156, 209)   ,S(153, 238)   ,S(143, 261)   ,S(88, 282)    ,
		S(124, 251)   ,S(118, 248)   ,S(124, 230)   ,S(129, 211)   ,S(125, 209)   ,S(107, 222)   ,S(75, 250)    ,S(80, 252)    ,
		S(120, 217)   ,S(110, 220)   ,S(120, 206)   ,S(118, 204)   ,S(105, 201)   ,S(89, 215)    ,S(67, 229)    ,S(64, 232)    ,
		S(122, 205)   ,S(133, 196)   ,S(117, 212)   ,S(107, 215)   ,S(94, 212)    ,S(86, 215)    ,S(70, 223)    ,S(62, 225)    ,
		S(124, 203)   ,S(148, 197)   ,S(136, 222)   ,S(98, 234)    ,S(78, 227)    ,S(73, 228)    ,S(64, 232)    ,S(63, 234)    ,
		S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,S(100, 207)   ,
	},
};
const PScore knightTable[2][64] = {
	{
		S(245, 572)   ,S(335, 650)   ,S(319, 693)   ,S(429, 666)   ,S(480, 658)   ,S(340, 698)   ,S(340, 661)   ,S(309, 542)   ,
		S(466, 617)   ,S(466, 644)   ,S(513, 646)   ,S(538, 681)   ,S(530, 683)   ,S(557, 633)   ,S(458, 648)   ,S(484, 619)   ,
		S(450, 631)   ,S(477, 659)   ,S(496, 699)   ,S(504, 700)   ,S(535, 694)   ,S(517, 703)   ,S(471, 679)   ,S(460, 651)   ,
		S(481, 651)   ,S(484, 668)   ,S(495, 700)   ,S(491, 726)   ,S(492, 737)   ,S(500, 719)   ,S(480, 711)   ,S(481, 685)   ,
		S(467, 656)   ,S(474, 670)   ,S(473, 700)   ,S(475, 712)   ,S(482, 721)   ,S(481, 708)   ,S(491, 688)   ,S(472, 684)   ,
		S(444, 611)   ,S(455, 648)   ,S(452, 673)   ,S(464, 703)   ,S(462, 700)   ,S(451, 674)   ,S(453, 663)   ,S(444, 640)   ,
		S(426, 634)   ,S(433, 648)   ,S(439, 645)   ,S(447, 668)   ,S(443, 670)   ,S(437, 645)   ,S(426, 655)   ,S(431, 662)   ,
		S(413, 590)   ,S(439, 608)   ,S(433, 623)   ,S(436, 657)   ,S(432, 661)   ,S(428, 653)   ,S(427, 635)   ,S(391, 620)   ,
	},
	{
		S(273, 533)   ,S(345, 630)   ,S(346, 679)   ,S(451, 654)   ,S(454, 648)   ,S(303, 689)   ,S(321, 654)   ,S(274, 548)   ,
		S(457, 613)   ,S(452, 650)   ,S(516, 648)   ,S(571, 663)   ,S(534, 668)   ,S(538, 640)   ,S(463, 639)   ,S(472, 608)   ,
		S(434, 651)   ,S(494, 663)   ,S(497, 702)   ,S(517, 700)   ,S(532, 689)   ,S(511, 693)   ,S(502, 646)   ,S(459, 630)   ,
		S(468, 665)   ,S(488, 682)   ,S(496, 709)   ,S(506, 718)   ,S(503, 720)   ,S(499, 699)   ,S(484, 684)   ,S(480, 652)   ,
		S(473, 668)   ,S(475, 680)   ,S(483, 699)   ,S(484, 710)   ,S(487, 712)   ,S(479, 700)   ,S(475, 675)   ,S(477, 651)   ,
		S(421, 644)   ,S(447, 657)   ,S(457, 673)   ,S(458, 696)   ,S(460, 697)   ,S(449, 670)   ,S(447, 642)   ,S(430, 614)   ,
		S(417, 669)   ,S(405, 670)   ,S(429, 650)   ,S(438, 663)   ,S(443, 665)   ,S(432, 647)   ,S(417, 652)   ,S(417, 627)   ,
		S(382, 638)   ,S(408, 639)   ,S(418, 651)   ,S(412, 659)   ,S(430, 648)   ,S(434, 615)   ,S(427, 615)   ,S(404, 580)   ,
	},
};
const PScore bishopTable[2][64] = {
	{
		S(419, 741)   ,S(399, 740)   ,S(344, 739)   ,S(335, 750)   ,S(360, 736)   ,S(325, 736)   ,S(427, 721)   ,S(414, 730)   ,
		S(419, 731)   ,S(478, 722)   ,S(476, 718)   ,S(444, 725)   ,S(471, 717)   ,S(468, 722)   ,S(436, 732)   ,S(438, 720)   ,
		S(477, 722)   ,S(482, 727)   ,S(504, 722)   ,S(486, 717)   ,S(499, 719)   ,S(494, 743)   ,S(479, 733)   ,S(468, 739)   ,
		S(465, 722)   ,S(499, 717)   ,S(481, 720)   ,S(505, 738)   ,S(507, 743)   ,S(501, 726)   ,S(504, 728)   ,S(456, 735)   ,
		S(473, 702)   ,S(479, 712)   ,S(472, 735)   ,S(491, 734)   ,S(499, 734)   ,S(473, 728)   ,S(481, 715)   ,S(481, 703)   ,
		S(475, 702)   ,S(489, 711)   ,S(478, 725)   ,S(482, 726)   ,S(476, 725)   ,S(479, 721)   ,S(482, 706)   ,S(486, 712)   ,
		S(487, 694)   ,S(482, 682)   ,S(481, 699)   ,S(460, 716)   ,S(460, 719)   ,S(478, 700)   ,S(492, 699)   ,S(481, 679)   ,
		S(493, 691)   ,S(480, 706)   ,S(461, 709)   ,S(454, 704)   ,S(449, 714)   ,S(454, 721)   ,S(457, 704)   ,S(479, 688)   ,
	},
	{
		S(389, 735)   ,S(354, 734)   ,S(371, 728)   ,S(352, 735)   ,S(341, 740)   ,S(322, 738)   ,S(434, 724)   ,S(396, 747)   ,
		S(394, 724)   ,S(441, 736)   ,S(462, 725)   ,S(441, 718)   ,S(460, 717)   ,S(484, 716)   ,S(479, 726)   ,S(444, 718)   ,
		S(464, 736)   ,S(496, 730)   ,S(497, 728)   ,S(504, 721)   ,S(504, 710)   ,S(508, 724)   ,S(498, 720)   ,S(485, 722)   ,
		S(462, 721)   ,S(503, 721)   ,S(493, 728)   ,S(511, 734)   ,S(521, 732)   ,S(492, 715)   ,S(502, 720)   ,S(479, 722)   ,
		S(480, 704)   ,S(467, 719)   ,S(487, 724)   ,S(500, 730)   ,S(497, 731)   ,S(483, 724)   ,S(484, 706)   ,S(466, 705)   ,
		S(477, 707)   ,S(489, 710)   ,S(490, 722)   ,S(492, 715)   ,S(483, 720)   ,S(484, 713)   ,S(483, 703)   ,S(467, 701)   ,
		S(477, 703)   ,S(501, 689)   ,S(483, 703)   ,S(466, 712)   ,S(464, 710)   ,S(467, 698)   ,S(471, 686)   ,S(480, 676)   ,
		S(489, 692)   ,S(459, 702)   ,S(456, 714)   ,S(451, 703)   ,S(452, 702)   ,S(458, 703)   ,S(472, 703)   ,S(485, 687)   ,
	},
};
const PScore rookTable[2][64] = {
	{
		S(646, 1280)  ,S(640, 1284)  ,S(609, 1296)  ,S(616, 1291)  ,S(609, 1299)  ,S(663, 1295)  ,S(654, 1297)  ,S(665, 1285)  ,
		S(622, 1276)  ,S(608, 1288)  ,S(631, 1282)  ,S(647, 1283)  ,S(630, 1292)  ,S(667, 1269)  ,S(626, 1282)  ,S(635, 1269)  ,
		S(614, 1265)  ,S(666, 1246)  ,S(642, 1261)  ,S(676, 1240)  ,S(690, 1237)  ,S(690, 1254)  ,S(712, 1234)  ,S(644, 1256)  ,
		S(613, 1255)  ,S(634, 1252)  ,S(643, 1251)  ,S(674, 1240)  ,S(659, 1249)  ,S(669, 1248)  ,S(655, 1256)  ,S(637, 1252)  ,
		S(589, 1239)  ,S(591, 1255)  ,S(593, 1251)  ,S(609, 1242)  ,S(599, 1248)  ,S(604, 1254)  ,S(625, 1248)  ,S(605, 1230)  ,
		S(585, 1218)  ,S(596, 1232)  ,S(586, 1228)  ,S(606, 1219)  ,S(602, 1222)  ,S(603, 1226)  ,S(633, 1216)  ,S(602, 1197)  ,
		S(568, 1213)  ,S(599, 1208)  ,S(598, 1216)  ,S(606, 1209)  ,S(605, 1208)  ,S(618, 1200)  ,S(627, 1191)  ,S(552, 1213)  ,
		S(606, 1211)  ,S(607, 1216)  ,S(610, 1217)  ,S(618, 1208)  ,S(616, 1208)  ,S(621, 1227)  ,S(615, 1216)  ,S(605, 1191)  ,
	},
	{
		S(658, 1273)  ,S(616, 1299)  ,S(634, 1297)  ,S(629, 1285)  ,S(637, 1279)  ,S(641, 1274)  ,S(671, 1262)  ,S(675, 1262)  ,
		S(600, 1279)  ,S(622, 1282)  ,S(651, 1275)  ,S(642, 1278)  ,S(645, 1273)  ,S(657, 1258)  ,S(624, 1270)  ,S(638, 1265)  ,
		S(609, 1268)  ,S(668, 1248)  ,S(657, 1263)  ,S(681, 1236)  ,S(695, 1226)  ,S(664, 1244)  ,S(694, 1228)  ,S(640, 1251)  ,
		S(600, 1257)  ,S(643, 1252)  ,S(659, 1251)  ,S(664, 1239)  ,S(663, 1239)  ,S(650, 1243)  ,S(651, 1239)  ,S(636, 1246)  ,
		S(569, 1226)  ,S(604, 1239)  ,S(595, 1251)  ,S(598, 1244)  ,S(600, 1238)  ,S(595, 1248)  ,S(596, 1248)  ,S(594, 1235)  ,
		S(557, 1204)  ,S(602, 1215)  ,S(604, 1218)  ,S(596, 1215)  ,S(594, 1218)  ,S(591, 1222)  ,S(612, 1221)  ,S(589, 1208)  ,
		S(464, 1232)  ,S(581, 1197)  ,S(599, 1207)  ,S(598, 1208)  ,S(601, 1202)  ,S(603, 1201)  ,S(606, 1196)  ,S(560, 1203)  ,
		S(559, 1212)  ,S(584, 1224)  ,S(614, 1214)  ,S(615, 1206)  ,S(614, 1202)  ,S(611, 1206)  ,S(617, 1202)  ,S(604, 1195)  ,
	},
};
const PScore queenTable[2][64] = {
	{
		S(1248, 1471) ,S(1281, 1464) ,S(1261, 1501) ,S(1263, 1511) ,S(1249, 1543) ,S(1285, 1539) ,S(1283, 1510) ,S(1277, 1480) ,
		S(1275, 1451) ,S(1220, 1498) ,S(1272, 1470) ,S(1211, 1539) ,S(1215, 1578) ,S(1293, 1552) ,S(1211, 1552) ,S(1291, 1491) ,
		S(1279, 1453) ,S(1284, 1446) ,S(1271, 1471) ,S(1280, 1484) ,S(1289, 1521) ,S(1293, 1538) ,S(1289, 1538) ,S(1270, 1552) ,
		S(1291, 1438) ,S(1290, 1476) ,S(1282, 1463) ,S(1266, 1531) ,S(1265, 1555) ,S(1302, 1549) ,S(1311, 1540) ,S(1309, 1508) ,
		S(1295, 1410) ,S(1293, 1458) ,S(1282, 1473) ,S(1278, 1524) ,S(1279, 1516) ,S(1294, 1504) ,S(1306, 1478) ,S(1311, 1460) ,
		S(1300, 1393) ,S(1306, 1424) ,S(1296, 1458) ,S(1294, 1451) ,S(1295, 1440) ,S(1299, 1464) ,S(1315, 1426) ,S(1312, 1400) ,
		S(1303, 1385) ,S(1307, 1390) ,S(1314, 1377) ,S(1309, 1411) ,S(1311, 1398) ,S(1329, 1339) ,S(1317, 1344) ,S(1283, 1392) ,
		S(1306, 1375) ,S(1308, 1376) ,S(1314, 1376) ,S(1320, 1403) ,S(1322, 1362) ,S(1295, 1361) ,S(1293, 1334) ,S(1289, 1354) ,
	},
	{
		S(1289, 1413) ,S(1285, 1449) ,S(1284, 1477) ,S(1274, 1512) ,S(1256, 1511) ,S(1274, 1481) ,S(1276, 1450) ,S(1277, 1437) ,
		S(1269, 1458) ,S(1207, 1512) ,S(1278, 1508) ,S(1207, 1564) ,S(1194, 1575) ,S(1275, 1469) ,S(1223, 1500) ,S(1294, 1432) ,
		S(1276, 1486) ,S(1277, 1490) ,S(1269, 1512) ,S(1289, 1509) ,S(1292, 1484) ,S(1277, 1484) ,S(1307, 1432) ,S(1306, 1448) ,
		S(1291, 1468) ,S(1303, 1513) ,S(1293, 1509) ,S(1284, 1532) ,S(1278, 1522) ,S(1294, 1460) ,S(1309, 1469) ,S(1312, 1448) ,
		S(1298, 1421) ,S(1299, 1474) ,S(1292, 1483) ,S(1287, 1511) ,S(1291, 1492) ,S(1290, 1464) ,S(1303, 1439) ,S(1300, 1415) ,
		S(1276, 1418) ,S(1303, 1416) ,S(1301, 1452) ,S(1300, 1430) ,S(1300, 1435) ,S(1304, 1435) ,S(1312, 1409) ,S(1305, 1377) ,
		S(1257, 1386) ,S(1293, 1352) ,S(1324, 1335) ,S(1317, 1384) ,S(1312, 1398) ,S(1321, 1355) ,S(1319, 1365) ,S(1313, 1353) ,
		S(1262, 1360) ,S(1289, 1327) ,S(1295, 1329) ,S(1313, 1345) ,S(1319, 1363) ,S(1322, 1340) ,S(1321, 1355) ,S(1313, 1338) ,
	},
};
const PScore kingTable[2][64] = {
	{
		S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(81, -41)    ,S(63, -34)    ,S(53, -31)    ,S(-20, -196)  ,
		S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(140, 11)    ,S(150, 30)    ,S(77, 63)     ,S(-14, -28)   ,
		S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(161, 37)    ,S(228, 44)    ,S(167, 57)    ,S(35, 7)      ,
		S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(119, 56)    ,S(143, 50)    ,S(110, 37)    ,S(-54, 11)    ,
		S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(76, 57)     ,S(83, 36)     ,S(74, 11)     ,S(-65, -16)   ,
		S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(25, 49)     ,S(28, 27)     ,S(17, 2)      ,S(-49, -14)   ,
		S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(-69, 42)    ,S(-54, 39)    ,S(-8, 4)      ,S(-2, -37)    ,
		S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(-73, -24)   ,S(-98, 13)    ,S(-9, -30)    ,S(0, -119)    ,
	},
	{
		S(-4, -212)   ,S(53, -83)    ,S(85, -67)    ,S(105, -42)   ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,
		S(-47, -44)   ,S(92, 34)     ,S(147, 10)    ,S(192, -18)   ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,
		S(6, 6)       ,S(175, 38)    ,S(202, 30)    ,S(174, 22)    ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,
		S(-37, 5)     ,S(126, 18)    ,S(152, 34)    ,S(125, 38)    ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,
		S(-51, -34)   ,S(70, 0)      ,S(121, 17)    ,S(80, 40)     ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,
		S(-71, -20)   ,S(11, -11)    ,S(40, 6)      ,S(24, 29)     ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,
		S(-11, -33)   ,S(-15, -12)   ,S(-19, 8)     ,S(-68, 22)    ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,
		S(-24, -107)  ,S(-11, -51)   ,S(-49, -10)   ,S(-92, -26)   ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,S(0, 0)       ,
	},
};

constexpr PScore materialValues[5] = {S(100, 207), S(429, 620), S(444, 665), S(600, 1193), S(1284, 1417), };
constexpr PScore knightMob[9] = {S(-27, -126), S(-9, -51), S(3, -4), S(11, 22), S(16, 33), S(21, 47), S(28, 47), S(39, 41), S(49, 17), };
constexpr PScore bishopMob[14] = {S(-49, -179), S(-18, -104), S(-1, -50), S(6, -21), S(17, -1), S(22, 18), S(25, 30), S(24, 39), S(23, 49), S(27, 51), S(35, 45), S(58, 31), S(64, 38), S(85, -3), };
constexpr PScore rookMob[15] = {S(-22, -138), S(-27, -88), S(-19, -55), S(-17, -38), S(-16, -21), S(-18, -2), S(-15, 8), S(-10, 8), S(-6, 13), S(2, 18), S(2, 24), S(7, 29), S(10, 32), S(27, 11), S(88, -22), };
constexpr PScore queenMob[28] = {S(-128, -450), S(-85, -475), S(-46, -382), S(-29, -291), S(-26, -194), S(-23, -136), S(-19, -102), S(-16, -85), S(-13, -65), S(-8, -52), S(-4, -44), S(0, -40), S(4, -37), S(7, -34), S(9, -34), S(10, -34), S(10, -36), S(5, -33), S(9, -37), S(11, -45), S(25, -69), S(32, -87), S(30, -99), S(42, -121), S(21, -128), S(25, -148), S(-2, -117), S(-12, -89), };

constexpr Score gamephaseInc[12] = { 0, 1, 1, 2, 4, 0, 0, 1, 1, 2, 4, 0 };

//constexpr Score KSAMG = -2;
constexpr double KSCALEMG = 869.629638671875;
constexpr double KSBMG = 1.6457970142364502;
constexpr double KSCMG = -3.0887644290924072;
// constexpr Score KSAEG = -71;
constexpr double KSCALEEG = 1094.2816162109375;
constexpr double KSBEG = 2.1417341232299805;
constexpr double KSCEG = 2.6192100048065186;

#define PAWNHASHSIZE 262144ULL

struct PawnEvalHashEntry {
    U64 hash;
    PScore score;
    BitBoard passers; // This can be shrinked to add more stuff and keep the alignement
};

extern PawnEvalHashEntry pawnEvalHash[PAWNHASHSIZE];

extern PScore PSQTs[2][12][64];
/**
* @brief The initTables function initializes the material - positional tables
* @note This function is called once at the beginning of the program
*/
void initTables();

/**
 * @brief The pestoEval function evaluates the material and positional scores
 * @param pos The position to evaluate
 * @return The material and positional scores
 */
Score pestoEval(Position* pos);

/** 
 * @brief The initTropism function initializes the tropism tables
 * @note This is called at the start of the program 
 */
void initTropism();

/**
 * @brief The convertToFeatures function converts a set of positions to a set of features
 * @param filename The filename of the epd file
 * @param output The output file to write the features to
 */
void convertToFeatures(std::string filename, std::string output);