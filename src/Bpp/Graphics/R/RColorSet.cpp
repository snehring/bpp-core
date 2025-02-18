//
// File: RColorSet.cpp
// Authors:
//   Julien Dutheil
// Created: 2008-04-14 00:00:00
//

/*
  Copyright or © or Copr. Bio++ Development Team, (November 17, 2008)
  
  This software is a computer program whose purpose is to provide utilitary
  classes. This file belongs to the Bio++ Project.
  
  This software is governed by the CeCILL license under French law and
  abiding by the rules of distribution of free software. You can use,
  modify and/ or redistribute the software under the terms of the CeCILL
  license as circulated by CEA, CNRS and INRIA at the following URL
  "http://www.cecill.info".
  
  As a counterpart to the access to the source code and rights to copy,
  modify and redistribute granted by the license, users are provided only
  with a limited warranty and the software's author, the holder of the
  economic rights, and the successive licensors have only limited
  liability.
  
  In this respect, the user's attention is drawn to the risks associated
  with loading, using, modifying and/or developing or reproducing the
  software by the user in light of its specific status of free software,
  that may mean that it is complicated to manipulate, and that also
  therefore means that it is reserved for developers and experienced
  professionals having in-depth computer knowledge. Users are therefore
  encouraged to load and test the software's suitability as regards their
  requirements in conditions enabling the security of their systems and/or
  data to be ensured and, more generally, to use and operate it in the
  same conditions as regards security.
  
  The fact that you are presently reading this means that you have had
  knowledge of the CeCILL license and that you accept its terms.
*/


#include "RColorSet.h"

using namespace bpp;

RColorSet::RColorSet()
{
  colors_["white"] = RGBColor(255, 255, 255);
  colors_["aliceblue"] = RGBColor(240, 248, 255);
  colors_["antiquewhite"] = RGBColor(250, 235, 215);
  colors_["antiquewhite1"] = RGBColor(255, 239, 219);
  colors_["antiquewhite2"] = RGBColor(238, 223, 204);
  colors_["antiquewhite3"] = RGBColor(205, 192, 176);
  colors_["antiquewhite4"] = RGBColor(139, 131, 120);
  colors_["aquamarine"] = RGBColor(127, 255, 212);
  colors_["aquamarine1"] = RGBColor(127, 255, 212);
  colors_["aquamarine2"] = RGBColor(118, 238, 198);
  colors_["aquamarine3"] = RGBColor(102, 205, 170);
  colors_["aquamarine4"] = RGBColor(69, 139, 116);
  colors_["azure"] = RGBColor(240, 255, 255);
  colors_["azure1"] = RGBColor(240, 255, 255);
  colors_["azure2"] = RGBColor(224, 238, 238);
  colors_["azure3"] = RGBColor(193, 205, 205);
  colors_["azure4"] = RGBColor(131, 139, 139);
  colors_["beige"] = RGBColor(245, 245, 220);
  colors_["bisque"] = RGBColor(255, 228, 196);
  colors_["bisque1"] = RGBColor(255, 228, 196);
  colors_["bisque2"] = RGBColor(238, 213, 183);
  colors_["bisque3"] = RGBColor(205, 183, 158);
  colors_["bisque4"] = RGBColor(139, 125, 107);
  colors_["black"] = RGBColor(0, 0, 0);
  colors_["blanchedalmond"] = RGBColor(255, 235, 205);
  colors_["blue"] = RGBColor(0, 0, 255);
  colors_["blue1"] = RGBColor(0, 0, 255);
  colors_["blue2"] = RGBColor(0, 0, 238);
  colors_["blue3"] = RGBColor(0, 0, 205);
  colors_["blue4"] = RGBColor(0, 0, 139);
  colors_["blueviolet"] = RGBColor(138, 43, 226);
  colors_["brown"] = RGBColor(165, 42, 42);
  colors_["brown1"] = RGBColor(255, 64, 64);
  colors_["brown2"] = RGBColor(238, 59, 59);
  colors_["brown3"] = RGBColor(205, 51, 51);
  colors_["brown4"] = RGBColor(139, 35, 35);
  colors_["burlywood"] = RGBColor(222, 184, 135);
  colors_["burlywood1"] = RGBColor(255, 211, 155);
  colors_["burlywood2"] = RGBColor(238, 197, 145);
  colors_["burlywood3"] = RGBColor(205, 170, 125);
  colors_["burlywood4"] = RGBColor(139, 115, 85);
  colors_["cadetblue"] = RGBColor(95, 158, 160);
  colors_["cadetblue1"] = RGBColor(152, 245, 255);
  colors_["cadetblue2"] = RGBColor(142, 229, 238);
  colors_["cadetblue3"] = RGBColor(122, 197, 205);
  colors_["cadetblue4"] = RGBColor(83, 134, 139);
  colors_["chartreuse"] = RGBColor(127, 255, 0);
  colors_["chartreuse1"] = RGBColor(127, 255, 0);
  colors_["chartreuse2"] = RGBColor(118, 238, 0);
  colors_["chartreuse3"] = RGBColor(102, 205, 0);
  colors_["chartreuse4"] = RGBColor(69, 139, 0);
  colors_["chocolate"] = RGBColor(210, 105, 30);
  colors_["chocolate1"] = RGBColor(255, 127, 36);
  colors_["chocolate2"] = RGBColor(238, 118, 33);
  colors_["chocolate3"] = RGBColor(205, 102, 29);
  colors_["chocolate4"] = RGBColor(139, 69, 19);
  colors_["coral"] = RGBColor(255, 127, 80);
  colors_["coral1"] = RGBColor(255, 114, 86);
  colors_["coral2"] = RGBColor(238, 106, 80);
  colors_["coral3"] = RGBColor(205, 91, 69);
  colors_["coral4"] = RGBColor(139, 62, 47);
  colors_["cornflowerblue"] = RGBColor(100, 149, 237);
  colors_["cornsilk"] = RGBColor(255, 248, 220);
  colors_["cornsilk1"] = RGBColor(255, 248, 220);
  colors_["cornsilk2"] = RGBColor(238, 232, 205);
  colors_["cornsilk3"] = RGBColor(205, 200, 177);
  colors_["cornsilk4"] = RGBColor(139, 136, 120);
  colors_["cyan"] = RGBColor(0, 255, 255);
  colors_["cyan1"] = RGBColor(0, 255, 255);
  colors_["cyan2"] = RGBColor(0, 238, 238);
  colors_["cyan3"] = RGBColor(0, 205, 205);
  colors_["cyan4"] = RGBColor(0, 139, 139);
  colors_["darkblue"] = RGBColor(0, 0, 139);
  colors_["darkcyan"] = RGBColor(0, 139, 139);
  colors_["darkgoldenrod"] = RGBColor(184, 134, 11);
  colors_["darkgoldenrod1"] = RGBColor(255, 185, 15);
  colors_["darkgoldenrod2"] = RGBColor(238, 173, 14);
  colors_["darkgoldenrod3"] = RGBColor(205, 149, 12);
  colors_["darkgoldenrod4"] = RGBColor(139, 101, 8);
  colors_["darkgray"] = RGBColor(169, 169, 169);
  colors_["darkgreen"] = RGBColor(0, 100, 0);
  colors_["darkgrey"] = RGBColor(169, 169, 169);
  colors_["darkkhaki"] = RGBColor(189, 183, 107);
  colors_["darkmagenta"] = RGBColor(139, 0, 139);
  colors_["darkolivegreen"] = RGBColor(85, 107, 47);
  colors_["darkolivegreen1"] = RGBColor(202, 255, 112);
  colors_["darkolivegreen2"] = RGBColor(188, 238, 104);
  colors_["darkolivegreen3"] = RGBColor(162, 205, 90);
  colors_["darkolivegreen4"] = RGBColor(110, 139, 61);
  colors_["darkorange"] = RGBColor(255, 140, 0);
  colors_["darkorange1"] = RGBColor(255, 127, 0);
  colors_["darkorange2"] = RGBColor(238, 118, 0);
  colors_["darkorange3"] = RGBColor(205, 102, 0);
  colors_["darkorange4"] = RGBColor(139, 69, 0);
  colors_["darkorchid"] = RGBColor(153, 50, 204);
  colors_["darkorchid1"] = RGBColor(191, 62, 255);
  colors_["darkorchid2"] = RGBColor(178, 58, 238);
  colors_["darkorchid3"] = RGBColor(154, 50, 205);
  colors_["darkorchid4"] = RGBColor(104, 34, 139);
  colors_["darkred"] = RGBColor(139, 0, 0);
  colors_["darksalmon"] = RGBColor(233, 150, 122);
  colors_["darkseagreen"] = RGBColor(143, 188, 143);
  colors_["darkseagreen1"] = RGBColor(193, 255, 193);
  colors_["darkseagreen2"] = RGBColor(180, 238, 180);
  colors_["darkseagreen3"] = RGBColor(155, 205, 155);
  colors_["darkseagreen4"] = RGBColor(105, 139, 105);
  colors_["darkslateblue"] = RGBColor(72, 61, 139);
  colors_["darkslategray"] = RGBColor(47, 79, 79);
  colors_["darkslategray1"] = RGBColor(151, 255, 255);
  colors_["darkslategray2"] = RGBColor(141, 238, 238);
  colors_["darkslategray3"] = RGBColor(121, 205, 205);
  colors_["darkslategray4"] = RGBColor(82, 139, 139);
  colors_["darkslategrey"] = RGBColor(47, 79, 79);
  colors_["darkturquoise"] = RGBColor(0, 206, 209);
  colors_["darkviolet"] = RGBColor(148, 0, 211);
  colors_["deeppink"] = RGBColor(255, 20, 147);
  colors_["deeppink1"] = RGBColor(255, 20, 147);
  colors_["deeppink2"] = RGBColor(238, 18, 137);
  colors_["deeppink3"] = RGBColor(205, 16, 118);
  colors_["deeppink4"] = RGBColor(139, 10, 80);
  colors_["deepskyblue"] = RGBColor(0, 191, 255);
  colors_["deepskyblue1"] = RGBColor(0, 191, 255);
  colors_["deepskyblue2"] = RGBColor(0, 178, 238);
  colors_["deepskyblue3"] = RGBColor(0, 154, 205);
  colors_["deepskyblue4"] = RGBColor(0, 104, 139);
  colors_["dimgray"] = RGBColor(105, 105, 105);
  colors_["dimgrey"] = RGBColor(105, 105, 105);
  colors_["dodgerblue"] = RGBColor(30, 144, 255);
  colors_["dodgerblue1"] = RGBColor(30, 144, 255);
  colors_["dodgerblue2"] = RGBColor(28, 134, 238);
  colors_["dodgerblue3"] = RGBColor(24, 116, 205);
  colors_["dodgerblue4"] = RGBColor(16, 78, 139);
  colors_["firebrick"] = RGBColor(178, 34, 34);
  colors_["firebrick1"] = RGBColor(255, 48, 48);
  colors_["firebrick2"] = RGBColor(238, 44, 44);
  colors_["firebrick3"] = RGBColor(205, 38, 38);
  colors_["firebrick4"] = RGBColor(139, 26, 26);
  colors_["floralwhite"] = RGBColor(255, 250, 240);
  colors_["forestgreen"] = RGBColor(34, 139, 34);
  colors_["gainsboro"] = RGBColor(220, 220, 220);
  colors_["ghostwhite"] = RGBColor(248, 248, 255);
  colors_["gold"] = RGBColor(255, 215, 0);
  colors_["gold1"] = RGBColor(255, 215, 0);
  colors_["gold2"] = RGBColor(238, 201, 0);
  colors_["gold3"] = RGBColor(205, 173, 0);
  colors_["gold4"] = RGBColor(139, 117, 0);
  colors_["goldenrod"] = RGBColor(218, 165, 32);
  colors_["goldenrod1"] = RGBColor(255, 193, 37);
  colors_["goldenrod2"] = RGBColor(238, 180, 34);
  colors_["goldenrod3"] = RGBColor(205, 155, 29);
  colors_["goldenrod4"] = RGBColor(139, 105, 20);
  colors_["gray"] = RGBColor(190, 190, 190);
  colors_["gray0"] = RGBColor(0, 0, 0);
  colors_["gray1"] = RGBColor(3, 3, 3);
  colors_["gray2"] = RGBColor(5, 5, 5);
  colors_["gray3"] = RGBColor(8, 8, 8);
  colors_["gray4"] = RGBColor(10, 10, 10);
  colors_["gray5"] = RGBColor(13, 13, 13);
  colors_["gray6"] = RGBColor(15, 15, 15);
  colors_["gray7"] = RGBColor(18, 18, 18);
  colors_["gray8"] = RGBColor(20, 20, 20);
  colors_["gray9"] = RGBColor(23, 23, 23);
  colors_["gray10"] = RGBColor(26, 26, 26);
  colors_["gray11"] = RGBColor(28, 28, 28);
  colors_["gray12"] = RGBColor(31, 31, 31);
  colors_["gray13"] = RGBColor(33, 33, 33);
  colors_["gray14"] = RGBColor(36, 36, 36);
  colors_["gray15"] = RGBColor(38, 38, 38);
  colors_["gray16"] = RGBColor(41, 41, 41);
  colors_["gray17"] = RGBColor(43, 43, 43);
  colors_["gray18"] = RGBColor(46, 46, 46);
  colors_["gray19"] = RGBColor(48, 48, 48);
  colors_["gray20"] = RGBColor(51, 51, 51);
  colors_["gray21"] = RGBColor(54, 54, 54);
  colors_["gray22"] = RGBColor(56, 56, 56);
  colors_["gray23"] = RGBColor(59, 59, 59);
  colors_["gray24"] = RGBColor(61, 61, 61);
  colors_["gray25"] = RGBColor(64, 64, 64);
  colors_["gray26"] = RGBColor(66, 66, 66);
  colors_["gray27"] = RGBColor(69, 69, 69);
  colors_["gray28"] = RGBColor(71, 71, 71);
  colors_["gray29"] = RGBColor(74, 74, 74);
  colors_["gray30"] = RGBColor(77, 77, 77);
  colors_["gray31"] = RGBColor(79, 79, 79);
  colors_["gray32"] = RGBColor(82, 82, 82);
  colors_["gray33"] = RGBColor(84, 84, 84);
  colors_["gray34"] = RGBColor(87, 87, 87);
  colors_["gray35"] = RGBColor(89, 89, 89);
  colors_["gray36"] = RGBColor(92, 92, 92);
  colors_["gray37"] = RGBColor(94, 94, 94);
  colors_["gray38"] = RGBColor(97, 97, 97);
  colors_["gray39"] = RGBColor(99, 99, 99);
  colors_["gray40"] = RGBColor(102, 102, 102);
  colors_["gray41"] = RGBColor(105, 105, 105);
  colors_["gray42"] = RGBColor(107, 107, 107);
  colors_["gray43"] = RGBColor(110, 110, 110);
  colors_["gray44"] = RGBColor(112, 112, 112);
  colors_["gray45"] = RGBColor(115, 115, 115);
  colors_["gray46"] = RGBColor(117, 117, 117);
  colors_["gray47"] = RGBColor(120, 120, 120);
  colors_["gray48"] = RGBColor(122, 122, 122);
  colors_["gray49"] = RGBColor(125, 125, 125);
  colors_["gray50"] = RGBColor(127, 127, 127);
  colors_["gray51"] = RGBColor(130, 130, 130);
  colors_["gray52"] = RGBColor(133, 133, 133);
  colors_["gray53"] = RGBColor(135, 135, 135);
  colors_["gray54"] = RGBColor(138, 138, 138);
  colors_["gray55"] = RGBColor(140, 140, 140);
  colors_["gray56"] = RGBColor(143, 143, 143);
  colors_["gray57"] = RGBColor(145, 145, 145);
  colors_["gray58"] = RGBColor(148, 148, 148);
  colors_["gray59"] = RGBColor(150, 150, 150);
  colors_["gray60"] = RGBColor(153, 153, 153);
  colors_["gray61"] = RGBColor(156, 156, 156);
  colors_["gray62"] = RGBColor(158, 158, 158);
  colors_["gray63"] = RGBColor(161, 161, 161);
  colors_["gray64"] = RGBColor(163, 163, 163);
  colors_["gray65"] = RGBColor(166, 166, 166);
  colors_["gray66"] = RGBColor(168, 168, 168);
  colors_["gray67"] = RGBColor(171, 171, 171);
  colors_["gray68"] = RGBColor(173, 173, 173);
  colors_["gray69"] = RGBColor(176, 176, 176);
  colors_["gray70"] = RGBColor(179, 179, 179);
  colors_["gray71"] = RGBColor(181, 181, 181);
  colors_["gray72"] = RGBColor(184, 184, 184);
  colors_["gray73"] = RGBColor(186, 186, 186);
  colors_["gray74"] = RGBColor(189, 189, 189);
  colors_["gray75"] = RGBColor(191, 191, 191);
  colors_["gray76"] = RGBColor(194, 194, 194);
  colors_["gray77"] = RGBColor(196, 196, 196);
  colors_["gray78"] = RGBColor(199, 199, 199);
  colors_["gray79"] = RGBColor(201, 201, 201);
  colors_["gray80"] = RGBColor(204, 204, 204);
  colors_["gray81"] = RGBColor(207, 207, 207);
  colors_["gray82"] = RGBColor(209, 209, 209);
  colors_["gray83"] = RGBColor(212, 212, 212);
  colors_["gray84"] = RGBColor(214, 214, 214);
  colors_["gray85"] = RGBColor(217, 217, 217);
  colors_["gray86"] = RGBColor(219, 219, 219);
  colors_["gray87"] = RGBColor(222, 222, 222);
  colors_["gray88"] = RGBColor(224, 224, 224);
  colors_["gray89"] = RGBColor(227, 227, 227);
  colors_["gray90"] = RGBColor(229, 229, 229);
  colors_["gray91"] = RGBColor(232, 232, 232);
  colors_["gray92"] = RGBColor(235, 235, 235);
  colors_["gray93"] = RGBColor(237, 237, 237);
  colors_["gray94"] = RGBColor(240, 240, 240);
  colors_["gray95"] = RGBColor(242, 242, 242);
  colors_["gray96"] = RGBColor(245, 245, 245);
  colors_["gray97"] = RGBColor(247, 247, 247);
  colors_["gray98"] = RGBColor(250, 250, 250);
  colors_["gray99"] = RGBColor(252, 252, 252);
  colors_["gray100"] = RGBColor(255, 255, 255);
  colors_["green"] = RGBColor(0, 255, 0);
  colors_["green1"] = RGBColor(0, 255, 0);
  colors_["green2"] = RGBColor(0, 238, 0);
  colors_["green3"] = RGBColor(0, 205, 0);
  colors_["green4"] = RGBColor(0, 139, 0);
  colors_["greenyellow"] = RGBColor(173, 255, 47);
  colors_["grey"] = RGBColor(190, 190, 190);
  colors_["grey0"] = RGBColor(0, 0, 0);
  colors_["grey1"] = RGBColor(3, 3, 3);
  colors_["grey2"] = RGBColor(5, 5, 5);
  colors_["grey3"] = RGBColor(8, 8, 8);
  colors_["grey4"] = RGBColor(10, 10, 10);
  colors_["grey5"] = RGBColor(13, 13, 13);
  colors_["grey6"] = RGBColor(15, 15, 15);
  colors_["grey7"] = RGBColor(18, 18, 18);
  colors_["grey8"] = RGBColor(20, 20, 20);
  colors_["grey9"] = RGBColor(23, 23, 23);
  colors_["grey10"] = RGBColor(26, 26, 26);
  colors_["grey11"] = RGBColor(28, 28, 28);
  colors_["grey12"] = RGBColor(31, 31, 31);
  colors_["grey13"] = RGBColor(33, 33, 33);
  colors_["grey14"] = RGBColor(36, 36, 36);
  colors_["grey15"] = RGBColor(38, 38, 38);
  colors_["grey16"] = RGBColor(41, 41, 41);
  colors_["grey17"] = RGBColor(43, 43, 43);
  colors_["grey18"] = RGBColor(46, 46, 46);
  colors_["grey19"] = RGBColor(48, 48, 48);
  colors_["grey20"] = RGBColor(51, 51, 51);
  colors_["grey21"] = RGBColor(54, 54, 54);
  colors_["grey22"] = RGBColor(56, 56, 56);
  colors_["grey23"] = RGBColor(59, 59, 59);
  colors_["grey24"] = RGBColor(61, 61, 61);
  colors_["grey25"] = RGBColor(64, 64, 64);
  colors_["grey26"] = RGBColor(66, 66, 66);
  colors_["grey27"] = RGBColor(69, 69, 69);
  colors_["grey28"] = RGBColor(71, 71, 71);
  colors_["grey29"] = RGBColor(74, 74, 74);
  colors_["grey30"] = RGBColor(77, 77, 77);
  colors_["grey31"] = RGBColor(79, 79, 79);
  colors_["grey32"] = RGBColor(82, 82, 82);
  colors_["grey33"] = RGBColor(84, 84, 84);
  colors_["grey34"] = RGBColor(87, 87, 87);
  colors_["grey35"] = RGBColor(89, 89, 89);
  colors_["grey36"] = RGBColor(92, 92, 92);
  colors_["grey37"] = RGBColor(94, 94, 94);
  colors_["grey38"] = RGBColor(97, 97, 97);
  colors_["grey39"] = RGBColor(99, 99, 99);
  colors_["grey40"] = RGBColor(102, 102, 102);
  colors_["grey41"] = RGBColor(105, 105, 105);
  colors_["grey42"] = RGBColor(107, 107, 107);
  colors_["grey43"] = RGBColor(110, 110, 110);
  colors_["grey44"] = RGBColor(112, 112, 112);
  colors_["grey45"] = RGBColor(115, 115, 115);
  colors_["grey46"] = RGBColor(117, 117, 117);
  colors_["grey47"] = RGBColor(120, 120, 120);
  colors_["grey48"] = RGBColor(122, 122, 122);
  colors_["grey49"] = RGBColor(125, 125, 125);
  colors_["grey50"] = RGBColor(127, 127, 127);
  colors_["grey51"] = RGBColor(130, 130, 130);
  colors_["grey52"] = RGBColor(133, 133, 133);
  colors_["grey53"] = RGBColor(135, 135, 135);
  colors_["grey54"] = RGBColor(138, 138, 138);
  colors_["grey55"] = RGBColor(140, 140, 140);
  colors_["grey56"] = RGBColor(143, 143, 143);
  colors_["grey57"] = RGBColor(145, 145, 145);
  colors_["grey58"] = RGBColor(148, 148, 148);
  colors_["grey59"] = RGBColor(150, 150, 150);
  colors_["grey60"] = RGBColor(153, 153, 153);
  colors_["grey61"] = RGBColor(156, 156, 156);
  colors_["grey62"] = RGBColor(158, 158, 158);
  colors_["grey63"] = RGBColor(161, 161, 161);
  colors_["grey64"] = RGBColor(163, 163, 163);
  colors_["grey65"] = RGBColor(166, 166, 166);
  colors_["grey66"] = RGBColor(168, 168, 168);
  colors_["grey67"] = RGBColor(171, 171, 171);
  colors_["grey68"] = RGBColor(173, 173, 173);
  colors_["grey69"] = RGBColor(176, 176, 176);
  colors_["grey70"] = RGBColor(179, 179, 179);
  colors_["grey71"] = RGBColor(181, 181, 181);
  colors_["grey72"] = RGBColor(184, 184, 184);
  colors_["grey73"] = RGBColor(186, 186, 186);
  colors_["grey74"] = RGBColor(189, 189, 189);
  colors_["grey75"] = RGBColor(191, 191, 191);
  colors_["grey76"] = RGBColor(194, 194, 194);
  colors_["grey77"] = RGBColor(196, 196, 196);
  colors_["grey78"] = RGBColor(199, 199, 199);
  colors_["grey79"] = RGBColor(201, 201, 201);
  colors_["grey80"] = RGBColor(204, 204, 204);
  colors_["grey81"] = RGBColor(207, 207, 207);
  colors_["grey82"] = RGBColor(209, 209, 209);
  colors_["grey83"] = RGBColor(212, 212, 212);
  colors_["grey84"] = RGBColor(214, 214, 214);
  colors_["grey85"] = RGBColor(217, 217, 217);
  colors_["grey86"] = RGBColor(219, 219, 219);
  colors_["grey87"] = RGBColor(222, 222, 222);
  colors_["grey88"] = RGBColor(224, 224, 224);
  colors_["grey89"] = RGBColor(227, 227, 227);
  colors_["grey90"] = RGBColor(229, 229, 229);
  colors_["grey91"] = RGBColor(232, 232, 232);
  colors_["grey92"] = RGBColor(235, 235, 235);
  colors_["grey93"] = RGBColor(237, 237, 237);
  colors_["grey94"] = RGBColor(240, 240, 240);
  colors_["grey95"] = RGBColor(242, 242, 242);
  colors_["grey96"] = RGBColor(245, 245, 245);
  colors_["grey97"] = RGBColor(247, 247, 247);
  colors_["grey98"] = RGBColor(250, 250, 250);
  colors_["grey99"] = RGBColor(252, 252, 252);
  colors_["grey100"] = RGBColor(255, 255, 255);
  colors_["honeydew"] = RGBColor(240, 255, 240);
  colors_["honeydew1"] = RGBColor(240, 255, 240);
  colors_["honeydew2"] = RGBColor(224, 238, 224);
  colors_["honeydew3"] = RGBColor(193, 205, 193);
  colors_["honeydew4"] = RGBColor(131, 139, 131);
  colors_["hotpink"] = RGBColor(255, 105, 180);
  colors_["hotpink1"] = RGBColor(255, 110, 180);
  colors_["hotpink2"] = RGBColor(238, 106, 167);
  colors_["hotpink3"] = RGBColor(205, 96, 144);
  colors_["hotpink4"] = RGBColor(139, 58, 98);
  colors_["indianred"] = RGBColor(205, 92, 92);
  colors_["indianred1"] = RGBColor(255, 106, 106);
  colors_["indianred2"] = RGBColor(238, 99, 99);
  colors_["indianred3"] = RGBColor(205, 85, 85);
  colors_["indianred4"] = RGBColor(139, 58, 58);
  colors_["ivory"] = RGBColor(255, 255, 240);
  colors_["ivory1"] = RGBColor(255, 255, 240);
  colors_["ivory2"] = RGBColor(238, 238, 224);
  colors_["ivory3"] = RGBColor(205, 205, 193);
  colors_["ivory4"] = RGBColor(139, 139, 131);
  colors_["khaki"] = RGBColor(240, 230, 140);
  colors_["khaki1"] = RGBColor(255, 246, 143);
  colors_["khaki2"] = RGBColor(238, 230, 133);
  colors_["khaki3"] = RGBColor(205, 198, 115);
  colors_["khaki4"] = RGBColor(139, 134, 78);
  colors_["lavender"] = RGBColor(230, 230, 250);
  colors_["lavenderblush"] = RGBColor(255, 240, 245);
  colors_["lavenderblush1"] = RGBColor(255, 240, 245);
  colors_["lavenderblush2"] = RGBColor(238, 224, 229);
  colors_["lavenderblush3"] = RGBColor(205, 193, 197);
  colors_["lavenderblush4"] = RGBColor(139, 131, 134);
  colors_["lawngreen"] = RGBColor(124, 252, 0);
  colors_["lemonchiffon"] = RGBColor(255, 250, 205);
  colors_["lemonchiffon1"] = RGBColor(255, 250, 205);
  colors_["lemonchiffon2"] = RGBColor(238, 233, 191);
  colors_["lemonchiffon3"] = RGBColor(205, 201, 165);
  colors_["lemonchiffon4"] = RGBColor(139, 137, 112);
  colors_["lightblue"] = RGBColor(173, 216, 230);
  colors_["lightblue1"] = RGBColor(191, 239, 255);
  colors_["lightblue2"] = RGBColor(178, 223, 238);
  colors_["lightblue3"] = RGBColor(154, 192, 205);
  colors_["lightblue4"] = RGBColor(104, 131, 139);
  colors_["lightcoral"] = RGBColor(240, 128, 128);
  colors_["lightcyan"] = RGBColor(224, 255, 255);
  colors_["lightcyan1"] = RGBColor(224, 255, 255);
  colors_["lightcyan2"] = RGBColor(209, 238, 238);
  colors_["lightcyan3"] = RGBColor(180, 205, 205);
  colors_["lightcyan4"] = RGBColor(122, 139, 139);
  colors_["lightgoldenrod"] = RGBColor(238, 221, 130);
  colors_["lightgoldenrod1"] = RGBColor(255, 236, 139);
  colors_["lightgoldenrod2"] = RGBColor(238, 220, 130);
  colors_["lightgoldenrod3"] = RGBColor(205, 190, 112);
  colors_["lightgoldenrod4"] = RGBColor(139, 129, 76);
  colors_["lightgoldenrodyellow"] = RGBColor(250, 250, 210);
  colors_["lightgray"] = RGBColor(211, 211, 211);
  colors_["lightgreen"] = RGBColor(144, 238, 144);
  colors_["lightgrey"] = RGBColor(211, 211, 211);
  colors_["lightpink"] = RGBColor(255, 182, 193);
  colors_["lightpink1"] = RGBColor(255, 174, 185);
  colors_["lightpink2"] = RGBColor(238, 162, 173);
  colors_["lightpink3"] = RGBColor(205, 140, 149);
  colors_["lightpink4"] = RGBColor(139, 95, 101);
  colors_["lightsalmon"] = RGBColor(255, 160, 122);
  colors_["lightsalmon1"] = RGBColor(255, 160, 122);
  colors_["lightsalmon2"] = RGBColor(238, 149, 114);
  colors_["lightsalmon3"] = RGBColor(205, 129, 98);
  colors_["lightsalmon4"] = RGBColor(139, 87, 66);
  colors_["lightseagreen"] = RGBColor(32, 178, 170);
  colors_["lightskyblue"] = RGBColor(135, 206, 250);
  colors_["lightskyblue1"] = RGBColor(176, 226, 255);
  colors_["lightskyblue2"] = RGBColor(164, 211, 238);
  colors_["lightskyblue3"] = RGBColor(141, 182, 205);
  colors_["lightskyblue4"] = RGBColor(96, 123, 139);
  colors_["lightslateblue"] = RGBColor(132, 112, 255);
  colors_["lightslategray"] = RGBColor(119, 136, 153);
  colors_["lightslategrey"] = RGBColor(119, 136, 153);
  colors_["lightsteelblue"] = RGBColor(176, 196, 222);
  colors_["lightsteelblue1"] = RGBColor(202, 225, 255);
  colors_["lightsteelblue2"] = RGBColor(188, 210, 238);
  colors_["lightsteelblue3"] = RGBColor(162, 181, 205);
  colors_["lightsteelblue4"] = RGBColor(110, 123, 139);
  colors_["lightyellow"] = RGBColor(255, 255, 224);
  colors_["lightyellow1"] = RGBColor(255, 255, 224);
  colors_["lightyellow2"] = RGBColor(238, 238, 209);
  colors_["lightyellow3"] = RGBColor(205, 205, 180);
  colors_["lightyellow4"] = RGBColor(139, 139, 122);
  colors_["limegreen"] = RGBColor(50, 205, 50);
  colors_["linen"] = RGBColor(250, 240, 230);
  colors_["magenta"] = RGBColor(255, 0, 255);
  colors_["magenta1"] = RGBColor(255, 0, 255);
  colors_["magenta2"] = RGBColor(238, 0, 238);
  colors_["magenta3"] = RGBColor(205, 0, 205);
  colors_["magenta4"] = RGBColor(139, 0, 139);
  colors_["maroon"] = RGBColor(176, 48, 96);
  colors_["maroon1"] = RGBColor(255, 52, 179);
  colors_["maroon2"] = RGBColor(238, 48, 167);
  colors_["maroon3"] = RGBColor(205, 41, 144);
  colors_["maroon4"] = RGBColor(139, 28, 98);
  colors_["mediumaquamarine"] = RGBColor(102, 205, 170);
  colors_["mediumblue"] = RGBColor(0, 0, 205);
  colors_["mediumorchid"] = RGBColor(186, 85, 211);
  colors_["mediumorchid1"] = RGBColor(224, 102, 255);
  colors_["mediumorchid2"] = RGBColor(209, 95, 238);
  colors_["mediumorchid3"] = RGBColor(180, 82, 205);
  colors_["mediumorchid4"] = RGBColor(122, 55, 139);
  colors_["mediumpurple"] = RGBColor(147, 112, 219);
  colors_["mediumpurple1"] = RGBColor(171, 130, 255);
  colors_["mediumpurple2"] = RGBColor(159, 121, 238);
  colors_["mediumpurple3"] = RGBColor(137, 104, 205);
  colors_["mediumpurple4"] = RGBColor(93, 71, 139);
  colors_["mediumseagreen"] = RGBColor(60, 179, 113);
  colors_["mediumslateblue"] = RGBColor(123, 104, 238);
  colors_["mediumspringgreen"] = RGBColor(0, 250, 154);
  colors_["mediumturquoise"] = RGBColor(72, 209, 204);
  colors_["mediumvioletred"] = RGBColor(199, 21, 133);
  colors_["midnightblue"] = RGBColor(25, 25, 112);
  colors_["mintcream"] = RGBColor(245, 255, 250);
  colors_["mistyrose"] = RGBColor(255, 228, 225);
  colors_["mistyrose1"] = RGBColor(255, 228, 225);
  colors_["mistyrose2"] = RGBColor(238, 213, 210);
  colors_["mistyrose3"] = RGBColor(205, 183, 181);
  colors_["mistyrose4"] = RGBColor(139, 125, 123);
  colors_["moccasin"] = RGBColor(255, 228, 181);
  colors_["navajowhite"] = RGBColor(255, 222, 173);
  colors_["navajowhite1"] = RGBColor(255, 222, 173);
  colors_["navajowhite2"] = RGBColor(238, 207, 161);
  colors_["navajowhite3"] = RGBColor(205, 179, 139);
  colors_["navajowhite4"] = RGBColor(139, 121, 94);
  colors_["navy"] = RGBColor(0, 0, 128);
  colors_["navyblue"] = RGBColor(0, 0, 128);
  colors_["oldlace"] = RGBColor(253, 245, 230);
  colors_["olivedrab"] = RGBColor(107, 142, 35);
  colors_["olivedrab1"] = RGBColor(192, 255, 62);
  colors_["olivedrab2"] = RGBColor(179, 238, 58);
  colors_["olivedrab3"] = RGBColor(154, 205, 50);
  colors_["olivedrab4"] = RGBColor(105, 139, 34);
  colors_["orange"] = RGBColor(255, 165, 0);
  colors_["orange1"] = RGBColor(255, 165, 0);
  colors_["orange2"] = RGBColor(238, 154, 0);
  colors_["orange3"] = RGBColor(205, 133, 0);
  colors_["orange4"] = RGBColor(139, 90, 0);
  colors_["orangered"] = RGBColor(255, 69, 0);
  colors_["orangered1"] = RGBColor(255, 69, 0);
  colors_["orangered2"] = RGBColor(238, 64, 0);
  colors_["orangered3"] = RGBColor(205, 55, 0);
  colors_["orangered4"] = RGBColor(139, 37, 0);
  colors_["orchid"] = RGBColor(218, 112, 214);
  colors_["orchid1"] = RGBColor(255, 131, 250);
  colors_["orchid2"] = RGBColor(238, 122, 233);
  colors_["orchid3"] = RGBColor(205, 105, 201);
  colors_["orchid4"] = RGBColor(139, 71, 137);
  colors_["palegoldenrod"] = RGBColor(238, 232, 170);
  colors_["palegreen"] = RGBColor(152, 251, 152);
  colors_["palegreen1"] = RGBColor(154, 255, 154);
  colors_["palegreen2"] = RGBColor(144, 238, 144);
  colors_["palegreen3"] = RGBColor(124, 205, 124);
  colors_["palegreen4"] = RGBColor(84, 139, 84);
  colors_["paleturquoise"] = RGBColor(175, 238, 238);
  colors_["paleturquoise1"] = RGBColor(187, 255, 255);
  colors_["paleturquoise2"] = RGBColor(174, 238, 238);
  colors_["paleturquoise3"] = RGBColor(150, 205, 205);
  colors_["paleturquoise4"] = RGBColor(102, 139, 139);
  colors_["palevioletred"] = RGBColor(219, 112, 147);
  colors_["palevioletred1"] = RGBColor(255, 130, 171);
  colors_["palevioletred2"] = RGBColor(238, 121, 159);
  colors_["palevioletred3"] = RGBColor(205, 104, 137);
  colors_["palevioletred4"] = RGBColor(139, 71, 93);
  colors_["papayawhip"] = RGBColor(255, 239, 213);
  colors_["peachpuff"] = RGBColor(255, 218, 185);
  colors_["peachpuff1"] = RGBColor(255, 218, 185);
  colors_["peachpuff2"] = RGBColor(238, 203, 173);
  colors_["peachpuff3"] = RGBColor(205, 175, 149);
  colors_["peachpuff4"] = RGBColor(139, 119, 101);
  colors_["peru"] = RGBColor(205, 133, 63);
  colors_["pink"] = RGBColor(255, 192, 203);
  colors_["pink1"] = RGBColor(255, 181, 197);
  colors_["pink2"] = RGBColor(238, 169, 184);
  colors_["pink3"] = RGBColor(205, 145, 158);
  colors_["pink4"] = RGBColor(139, 99, 108);
  colors_["plum"] = RGBColor(221, 160, 221);
  colors_["plum1"] = RGBColor(255, 187, 255);
  colors_["plum2"] = RGBColor(238, 174, 238);
  colors_["plum3"] = RGBColor(205, 150, 205);
  colors_["plum4"] = RGBColor(139, 102, 139);
  colors_["powderblue"] = RGBColor(176, 224, 230);
  colors_["purple"] = RGBColor(160, 32, 240);
  colors_["purple1"] = RGBColor(155, 48, 255);
  colors_["purple2"] = RGBColor(145, 44, 238);
  colors_["purple3"] = RGBColor(125, 38, 205);
  colors_["purple4"] = RGBColor(85, 26, 139);
  colors_["red"] = RGBColor(255, 0, 0);
  colors_["red1"] = RGBColor(255, 0, 0);
  colors_["red2"] = RGBColor(238, 0, 0);
  colors_["red3"] = RGBColor(205, 0, 0);
  colors_["red4"] = RGBColor(139, 0, 0);
  colors_["rosybrown"] = RGBColor(188, 143, 143);
  colors_["rosybrown1"] = RGBColor(255, 193, 193);
  colors_["rosybrown2"] = RGBColor(238, 180, 180);
  colors_["rosybrown3"] = RGBColor(205, 155, 155);
  colors_["rosybrown4"] = RGBColor(139, 105, 105);
  colors_["royalblue"] = RGBColor(65, 105, 225);
  colors_["royalblue1"] = RGBColor(72, 118, 255);
  colors_["royalblue2"] = RGBColor(67, 110, 238);
  colors_["royalblue3"] = RGBColor(58, 95, 205);
  colors_["royalblue4"] = RGBColor(39, 64, 139);
  colors_["saddlebrown"] = RGBColor(139, 69, 19);
  colors_["salmon"] = RGBColor(250, 128, 114);
  colors_["salmon1"] = RGBColor(255, 140, 105);
  colors_["salmon2"] = RGBColor(238, 130, 98);
  colors_["salmon3"] = RGBColor(205, 112, 84);
  colors_["salmon4"] = RGBColor(139, 76, 57);
  colors_["sandybrown"] = RGBColor(244, 164, 96);
  colors_["seagreen"] = RGBColor(46, 139, 87);
  colors_["seagreen1"] = RGBColor(84, 255, 159);
  colors_["seagreen2"] = RGBColor(78, 238, 148);
  colors_["seagreen3"] = RGBColor(67, 205, 128);
  colors_["seagreen4"] = RGBColor(46, 139, 87);
  colors_["seashell"] = RGBColor(255, 245, 238);
  colors_["seashell1"] = RGBColor(255, 245, 238);
  colors_["seashell2"] = RGBColor(238, 229, 222);
  colors_["seashell3"] = RGBColor(205, 197, 191);
  colors_["seashell4"] = RGBColor(139, 134, 130);
  colors_["sienna"] = RGBColor(160, 82, 45);
  colors_["sienna1"] = RGBColor(255, 130, 71);
  colors_["sienna2"] = RGBColor(238, 121, 66);
  colors_["sienna3"] = RGBColor(205, 104, 57);
  colors_["sienna4"] = RGBColor(139, 71, 38);
  colors_["skyblue"] = RGBColor(135, 206, 235);
  colors_["skyblue1"] = RGBColor(135, 206, 255);
  colors_["skyblue2"] = RGBColor(126, 192, 238);
  colors_["skyblue3"] = RGBColor(108, 166, 205);
  colors_["skyblue4"] = RGBColor(74, 112, 139);
  colors_["slateblue"] = RGBColor(106, 90, 205);
  colors_["slateblue1"] = RGBColor(131, 111, 255);
  colors_["slateblue2"] = RGBColor(122, 103, 238);
  colors_["slateblue3"] = RGBColor(105, 89, 205);
  colors_["slateblue4"] = RGBColor(71, 60, 139);
  colors_["slategray"] = RGBColor(112, 128, 144);
  colors_["slategray1"] = RGBColor(198, 226, 255);
  colors_["slategray2"] = RGBColor(185, 211, 238);
  colors_["slategray3"] = RGBColor(159, 182, 205);
  colors_["slategray4"] = RGBColor(108, 123, 139);
  colors_["slategrey"] = RGBColor(112, 128, 144);
  colors_["snow"] = RGBColor(255, 250, 250);
  colors_["snow1"] = RGBColor(255, 250, 250);
  colors_["snow2"] = RGBColor(238, 233, 233);
  colors_["snow3"] = RGBColor(205, 201, 201);
  colors_["snow4"] = RGBColor(139, 137, 137);
  colors_["springgreen"] = RGBColor(0, 255, 127);
  colors_["springgreen1"] = RGBColor(0, 255, 127);
  colors_["springgreen2"] = RGBColor(0, 238, 118);
  colors_["springgreen3"] = RGBColor(0, 205, 102);
  colors_["springgreen4"] = RGBColor(0, 139, 69);
  colors_["steelblue"] = RGBColor(70, 130, 180);
  colors_["steelblue1"] = RGBColor(99, 184, 255);
  colors_["steelblue2"] = RGBColor(92, 172, 238);
  colors_["steelblue3"] = RGBColor(79, 148, 205);
  colors_["steelblue4"] = RGBColor(54, 100, 139);
  colors_["tan"] = RGBColor(210, 180, 140);
  colors_["tan1"] = RGBColor(255, 165, 79);
  colors_["tan2"] = RGBColor(238, 154, 73);
  colors_["tan3"] = RGBColor(205, 133, 63);
  colors_["tan4"] = RGBColor(139, 90, 43);
  colors_["thistle"] = RGBColor(216, 191, 216);
  colors_["thistle1"] = RGBColor(255, 225, 255);
  colors_["thistle2"] = RGBColor(238, 210, 238);
  colors_["thistle3"] = RGBColor(205, 181, 205);
  colors_["thistle4"] = RGBColor(139, 123, 139);
  colors_["tomato"] = RGBColor(255, 99, 71);
  colors_["tomato1"] = RGBColor(255, 99, 71);
  colors_["tomato2"] = RGBColor(238, 92, 66);
  colors_["tomato3"] = RGBColor(205, 79, 57);
  colors_["tomato4"] = RGBColor(139, 54, 38);
  colors_["turquoise"] = RGBColor(64, 224, 208);
  colors_["turquoise1"] = RGBColor(0, 245, 255);
  colors_["turquoise2"] = RGBColor(0, 229, 238);
  colors_["turquoise3"] = RGBColor(0, 197, 205);
  colors_["turquoise4"] = RGBColor(0, 134, 139);
  colors_["violet"] = RGBColor(238, 130, 238);
  colors_["violetred"] = RGBColor(208, 32, 144);
  colors_["violetred1"] = RGBColor(255, 62, 150);
  colors_["violetred2"] = RGBColor(238, 58, 140);
  colors_["violetred3"] = RGBColor(205, 50, 120);
  colors_["violetred4"] = RGBColor(139, 34, 82);
  colors_["wheat"] = RGBColor(245, 222, 179);
  colors_["wheat1"] = RGBColor(255, 231, 186);
  colors_["wheat2"] = RGBColor(238, 216, 174);
  colors_["wheat3"] = RGBColor(205, 186, 150);
  colors_["wheat4"] = RGBColor(139, 126, 102);
  colors_["whitesmoke"] = RGBColor(245, 245, 245);
  colors_["yellow"] = RGBColor(255, 255, 0);
  colors_["yellow1"] = RGBColor(255, 255, 0);
  colors_["yellow2"] = RGBColor(238, 238, 0);
  colors_["yellow3"] = RGBColor(205, 205, 0);
  colors_["yellow4"] = RGBColor(139, 139, 0);
  colors_["yellowgreen"] = RGBColor(154, 205, 50);
}
