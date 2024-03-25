#include <ultra64.h>

#include "sm64.h"
#include "make_const_nonconst.h"

ALIGNED8 const u8 eman_tl_textures_dma[] = {
#include "actors/amp/tl0.rgba16.inc.c"
    ,
#include "actors/amp/tl1.rgba16.inc.c"
    ,
#include "actors/amp/tl2.rgba16.inc.c"
    ,
#include "actors/amp/tl3.rgba16.inc.c"
    ,
#include "actors/amp/tl4.rgba16.inc.c"
    ,
#include "actors/amp/tl5.rgba16.inc.c"
    ,
#include "actors/amp/tl6.rgba16.inc.c"
    ,
#include "actors/amp/tl7.rgba16.inc.c"
    ,
#include "actors/amp/tl8.rgba16.inc.c"
    ,
#include "actors/amp/tl9.rgba16.inc.c"
    ,
#include "actors/amp/tl10.rgba16.inc.c"
    ,
#include "actors/amp/tl11.rgba16.inc.c"
    ,
#include "actors/amp/tl12.rgba16.inc.c"
    ,
#include "actors/amp/tl13.rgba16.inc.c"
    ,
#include "actors/amp/tl14.rgba16.inc.c"
    ,
#include "actors/amp/tl15.rgba16.inc.c"
    ,
#include "actors/amp/tl16.rgba16.inc.c"
    ,
#include "actors/amp/tl17.rgba16.inc.c"
    ,
#include "actors/amp/tl18.rgba16.inc.c"
    ,
#include "actors/amp/tl19.rgba16.inc.c"
    ,
#include "actors/amp/tl20.rgba16.inc.c"
    ,
#include "actors/amp/tl21.rgba16.inc.c"
    ,
#include "actors/amp/tl22.rgba16.inc.c"
    ,
#include "actors/amp/tl23.rgba16.inc.c"
    ,
#include "actors/amp/tl24.rgba16.inc.c"
    ,
#include "actors/amp/tl25.rgba16.inc.c"
    ,
#include "actors/amp/tl26.rgba16.inc.c"
    ,
#include "actors/amp/tl27.rgba16.inc.c"
    ,
#include "actors/amp/tl28.rgba16.inc.c"
    ,
#include "actors/amp/tl29.rgba16.inc.c"
    ,
#include "actors/amp/tl30.rgba16.inc.c"
    ,
#include "actors/amp/tl31.rgba16.inc.c"
    ,
#include "actors/amp/tl32.rgba16.inc.c"
    ,
#include "actors/amp/tl33.rgba16.inc.c"
    ,
#include "actors/amp/tl34.rgba16.inc.c"
    ,
#include "actors/amp/tl35.rgba16.inc.c"
    ,
#include "actors/amp/tl36.rgba16.inc.c"
    ,
#include "actors/amp/tl37.rgba16.inc.c"
    ,
#include "actors/amp/tl38.rgba16.inc.c"
    ,
#include "actors/amp/tl39.rgba16.inc.c"
    ,
#include "actors/amp/tl40.rgba16.inc.c"
    ,
#include "actors/amp/tl41.rgba16.inc.c"
    ,
#include "actors/amp/tl42.rgba16.inc.c"
    ,
#include "actors/amp/tl43.rgba16.inc.c"
    ,
#include "actors/amp/tl44.rgba16.inc.c"
    ,
#include "actors/amp/tl45.rgba16.inc.c"
    ,
#include "actors/amp/tl46.rgba16.inc.c"
    ,
#include "actors/amp/tl47.rgba16.inc.c"
    ,
#include "actors/amp/tl48.rgba16.inc.c"
    ,
#include "actors/amp/tl49.rgba16.inc.c"
    ,
#include "actors/amp/tl50.rgba16.inc.c"
    ,
#include "actors/amp/tl51.rgba16.inc.c"
    ,
#include "actors/amp/tl52.rgba16.inc.c"
    ,
#include "actors/amp/tl53.rgba16.inc.c"
    ,
#include "actors/amp/tl54.rgba16.inc.c"
    ,
#include "actors/amp/tl55.rgba16.inc.c"
    ,
#include "actors/amp/tl56.rgba16.inc.c"
    ,
#include "actors/amp/tl57.rgba16.inc.c"
    ,
#include "actors/amp/tl58.rgba16.inc.c"
    ,
#include "actors/amp/tl59.rgba16.inc.c"
    ,
#include "actors/amp/tl60.rgba16.inc.c"
    ,
#include "actors/amp/tl61.rgba16.inc.c"
    ,
#include "actors/amp/tl62.rgba16.inc.c"
    ,
#include "actors/amp/tl63.rgba16.inc.c"
    ,
#include "actors/amp/tl64.rgba16.inc.c"
    ,
#include "actors/amp/tl65.rgba16.inc.c"
    ,
#include "actors/amp/tl66.rgba16.inc.c"
    ,
#include "actors/amp/tl67.rgba16.inc.c"
    ,
#include "actors/amp/tl68.rgba16.inc.c"
    ,
#include "actors/amp/tl69.rgba16.inc.c"
    ,
#include "actors/amp/tl70.rgba16.inc.c"
    ,
#include "actors/amp/tl71.rgba16.inc.c"
    ,
#include "actors/amp/tl72.rgba16.inc.c"
    ,
#include "actors/amp/tl73.rgba16.inc.c"
    ,
#include "actors/amp/tl74.rgba16.inc.c"
    ,
#include "actors/amp/tl75.rgba16.inc.c"
    ,
#include "actors/amp/tl76.rgba16.inc.c"
    ,
#include "actors/amp/tl77.rgba16.inc.c"
    ,
#include "actors/amp/tl78.rgba16.inc.c"
    ,
#include "actors/amp/tl79.rgba16.inc.c"
    ,
#include "actors/amp/tl80.rgba16.inc.c"
    ,
#include "actors/amp/tl81.rgba16.inc.c"
    ,
#include "actors/amp/tl82.rgba16.inc.c"
    ,
#include "actors/amp/tl83.rgba16.inc.c"
    ,
#include "actors/amp/tl84.rgba16.inc.c"
    ,
#include "actors/amp/tl85.rgba16.inc.c"
    ,
#include "actors/amp/tl86.rgba16.inc.c"
    ,
#include "actors/amp/tl87.rgba16.inc.c"
    ,
#include "actors/amp/tl88.rgba16.inc.c"
    ,
#include "actors/amp/tl89.rgba16.inc.c"
    ,
#include "actors/amp/tl90.rgba16.inc.c"
    ,
#include "actors/amp/tl91.rgba16.inc.c"
    ,
#include "actors/amp/tl92.rgba16.inc.c"
    ,
#include "actors/amp/tl93.rgba16.inc.c"
    ,
#include "actors/amp/tl94.rgba16.inc.c"
    ,
#include "actors/amp/tl95.rgba16.inc.c"
    ,
#include "actors/amp/tl96.rgba16.inc.c"
    ,
#include "actors/amp/tl97.rgba16.inc.c"
    ,
#include "actors/amp/tl98.rgba16.inc.c"
    ,
#include "actors/amp/tl99.rgba16.inc.c"
    ,
#include "actors/amp/tl100.rgba16.inc.c"
    ,
#include "actors/amp/tl101.rgba16.inc.c"
    ,
#include "actors/amp/tl102.rgba16.inc.c"
    ,
#include "actors/amp/tl103.rgba16.inc.c"
    ,
#include "actors/amp/tl104.rgba16.inc.c"
    ,
#include "actors/amp/tl105.rgba16.inc.c"
    ,
#include "actors/amp/tl106.rgba16.inc.c"
    ,
#include "actors/amp/tl107.rgba16.inc.c"
    ,
#include "actors/amp/tl108.rgba16.inc.c"
    ,
#include "actors/amp/tl109.rgba16.inc.c"
    ,
#include "actors/amp/tl110.rgba16.inc.c"
    ,
#include "actors/amp/tl111.rgba16.inc.c"
    ,
#include "actors/amp/tl112.rgba16.inc.c"
    ,
#include "actors/amp/tl113.rgba16.inc.c"
    ,
#include "actors/amp/tl114.rgba16.inc.c"
    ,
#include "actors/amp/tl115.rgba16.inc.c"
    ,
#include "actors/amp/tl116.rgba16.inc.c"
    ,
#include "actors/amp/tl117.rgba16.inc.c"
    ,
#include "actors/amp/tl118.rgba16.inc.c"
    ,
#include "actors/amp/tl119.rgba16.inc.c"
    ,
#include "actors/amp/tl120.rgba16.inc.c"
    ,
#include "actors/amp/tl121.rgba16.inc.c"
    ,
#include "actors/amp/tl122.rgba16.inc.c"
    ,
#include "actors/amp/tl123.rgba16.inc.c"
    ,
#include "actors/amp/tl124.rgba16.inc.c"
    ,
#include "actors/amp/tl125.rgba16.inc.c"
    ,
#include "actors/amp/tl126.rgba16.inc.c"
    ,
#include "actors/amp/tl127.rgba16.inc.c"
    ,
#include "actors/amp/tl128.rgba16.inc.c"
    ,
#include "actors/amp/tl129.rgba16.inc.c"
    ,
#include "actors/amp/tl130.rgba16.inc.c"
    ,
#include "actors/amp/tl131.rgba16.inc.c"
    ,
#include "actors/amp/tl132.rgba16.inc.c"
    ,
#include "actors/amp/tl133.rgba16.inc.c"
    ,
#include "actors/amp/tl134.rgba16.inc.c"
    ,
#include "actors/amp/tl135.rgba16.inc.c"
    ,
#include "actors/amp/tl136.rgba16.inc.c"
    ,
#include "actors/amp/tl137.rgba16.inc.c"
    ,
#include "actors/amp/tl138.rgba16.inc.c"
    ,
#include "actors/amp/tl139.rgba16.inc.c"
    ,
#include "actors/amp/tl140.rgba16.inc.c"
    ,
#include "actors/amp/tl141.rgba16.inc.c"
    ,
#include "actors/amp/tl142.rgba16.inc.c"
    ,
#include "actors/amp/tl143.rgba16.inc.c"
    ,
#include "actors/amp/tl144.rgba16.inc.c"
    ,
#include "actors/amp/tl145.rgba16.inc.c"
    ,
#include "actors/amp/tl146.rgba16.inc.c"
    ,
#include "actors/amp/tl147.rgba16.inc.c"
    ,
#include "actors/amp/tl148.rgba16.inc.c"
    ,
#include "actors/amp/tl149.rgba16.inc.c"
    ,
#include "actors/amp/tl150.rgba16.inc.c"
    ,
#include "actors/amp/tl151.rgba16.inc.c"
    ,
#include "actors/amp/tl152.rgba16.inc.c"
    ,
#include "actors/amp/tl153.rgba16.inc.c"
    ,
#include "actors/amp/tl154.rgba16.inc.c"
    ,
#include "actors/amp/tl155.rgba16.inc.c"
    ,
#include "actors/amp/tl156.rgba16.inc.c"
    ,
#include "actors/amp/tl157.rgba16.inc.c"
    ,
#include "actors/amp/tl158.rgba16.inc.c"
    ,
#include "actors/amp/tl159.rgba16.inc.c"
    ,
#include "actors/amp/tl160.rgba16.inc.c"
    ,
#include "actors/amp/tl161.rgba16.inc.c"
    ,
#include "actors/amp/tl162.rgba16.inc.c"
    ,
#include "actors/amp/tl163.rgba16.inc.c"
    ,
#include "actors/amp/tl164.rgba16.inc.c"
    ,
#include "actors/amp/tl165.rgba16.inc.c"
    ,
#include "actors/amp/tl166.rgba16.inc.c"
    ,
#include "actors/amp/tl167.rgba16.inc.c"
    ,
#include "actors/amp/tl168.rgba16.inc.c"
    ,
#include "actors/amp/tl169.rgba16.inc.c"
    ,
#include "actors/amp/tl170.rgba16.inc.c"
    ,
#include "actors/amp/tl171.rgba16.inc.c"
    ,
#include "actors/amp/tl172.rgba16.inc.c"
    ,
#include "actors/amp/tl173.rgba16.inc.c"
    ,
#include "actors/amp/tl174.rgba16.inc.c"
    ,
#include "actors/amp/tl175.rgba16.inc.c"
    ,
#include "actors/amp/tl176.rgba16.inc.c"
    ,
#include "actors/amp/tl177.rgba16.inc.c"
    ,
#include "actors/amp/tl178.rgba16.inc.c"
    ,
#include "actors/amp/tl179.rgba16.inc.c"
    ,
#include "actors/amp/tl180.rgba16.inc.c"
    ,
#include "actors/amp/tl181.rgba16.inc.c"
    ,
#include "actors/amp/tl182.rgba16.inc.c"
    ,
#include "actors/amp/tl183.rgba16.inc.c"
    ,
#include "actors/amp/tl184.rgba16.inc.c"
    ,
#include "actors/amp/tl185.rgba16.inc.c"
    ,
#include "actors/amp/tl186.rgba16.inc.c"
    ,
#include "actors/amp/tl187.rgba16.inc.c"
    ,
#include "actors/amp/tl188.rgba16.inc.c"
    ,
#include "actors/amp/tl189.rgba16.inc.c"
    ,
#include "actors/amp/tl190.rgba16.inc.c"
    ,
#include "actors/amp/tl191.rgba16.inc.c"
    ,
#include "actors/amp/tl192.rgba16.inc.c"
    ,
#include "actors/amp/tl193.rgba16.inc.c"
    ,
#include "actors/amp/tl194.rgba16.inc.c"
    ,
#include "actors/amp/tl195.rgba16.inc.c"
    ,
#include "actors/amp/tl196.rgba16.inc.c"
    ,
#include "actors/amp/tl197.rgba16.inc.c"
    ,
#include "actors/amp/tl198.rgba16.inc.c"
    ,
#include "actors/amp/tl199.rgba16.inc.c"
    ,
#include "actors/amp/tl200.rgba16.inc.c"
    ,
#include "actors/amp/tl201.rgba16.inc.c"
    ,
#include "actors/amp/tl202.rgba16.inc.c"
    ,
#include "actors/amp/tl203.rgba16.inc.c"
    ,
#include "actors/amp/tl204.rgba16.inc.c"
    ,
#include "actors/amp/tl205.rgba16.inc.c"
    ,
#include "actors/amp/tl206.rgba16.inc.c"
    ,
#include "actors/amp/tl207.rgba16.inc.c"
    ,
#include "actors/amp/tl208.rgba16.inc.c"
    ,
#include "actors/amp/tl209.rgba16.inc.c"
    ,
#include "actors/amp/tl210.rgba16.inc.c"
    ,
#include "actors/amp/tl211.rgba16.inc.c"
    ,
#include "actors/amp/tl212.rgba16.inc.c"
    ,
#include "actors/amp/tl213.rgba16.inc.c"
    ,
#include "actors/amp/tl214.rgba16.inc.c"
    ,
#include "actors/amp/tl215.rgba16.inc.c"
    ,
#include "actors/amp/tl216.rgba16.inc.c"
    ,
#include "actors/amp/tl217.rgba16.inc.c"
    ,
#include "actors/amp/tl218.rgba16.inc.c"
    ,
#include "actors/amp/tl219.rgba16.inc.c"
    ,
#include "actors/amp/tl220.rgba16.inc.c"
    ,
#include "actors/amp/tl221.rgba16.inc.c"
    ,
#include "actors/amp/tl222.rgba16.inc.c"
    ,
#include "actors/amp/tl223.rgba16.inc.c"
    ,
#include "actors/amp/tl224.rgba16.inc.c"
    ,
#include "actors/amp/tl225.rgba16.inc.c"
    ,
#include "actors/amp/tl226.rgba16.inc.c"
    ,
#include "actors/amp/tl227.rgba16.inc.c"
    ,
#include "actors/amp/tl228.rgba16.inc.c"
    ,
#include "actors/amp/tl229.rgba16.inc.c"
    ,
#include "actors/amp/tl230.rgba16.inc.c"
    ,
#include "actors/amp/tl231.rgba16.inc.c"
    ,
#include "actors/amp/tl232.rgba16.inc.c"
    ,
#include "actors/amp/tl233.rgba16.inc.c"
    ,
#include "actors/amp/tl234.rgba16.inc.c"
    ,
#include "actors/amp/tl235.rgba16.inc.c"
    ,
#include "actors/amp/tl236.rgba16.inc.c"
    ,
#include "actors/amp/tl237.rgba16.inc.c"
    ,
#include "actors/amp/tl238.rgba16.inc.c"
    ,
#include "actors/amp/tl239.rgba16.inc.c"
    ,
#include "actors/amp/tl240.rgba16.inc.c"
    ,
#include "actors/amp/tl241.rgba16.inc.c"
    ,
#include "actors/amp/tl242.rgba16.inc.c"
    ,
#include "actors/amp/tl243.rgba16.inc.c"
    ,
#include "actors/amp/tl244.rgba16.inc.c"
    ,
#include "actors/amp/tl245.rgba16.inc.c"
    ,
#include "actors/amp/tl246.rgba16.inc.c"
    ,
#include "actors/amp/tl247.rgba16.inc.c"
    ,
#include "actors/amp/tl248.rgba16.inc.c"
    ,
#include "actors/amp/tl249.rgba16.inc.c"
    ,
#include "actors/amp/tl250.rgba16.inc.c"
    ,
#include "actors/amp/tl251.rgba16.inc.c"
    ,
#include "actors/amp/tl252.rgba16.inc.c"
    ,
#include "actors/amp/tl253.rgba16.inc.c"
    ,
#include "actors/amp/tl254.rgba16.inc.c"
    ,
#include "actors/amp/tl255.rgba16.inc.c"
    ,
#include "actors/amp/tl256.rgba16.inc.c"
    ,
#include "actors/amp/tl257.rgba16.inc.c"
    ,
#include "actors/amp/tl258.rgba16.inc.c"
    ,
#include "actors/amp/tl259.rgba16.inc.c"
    ,
#include "actors/amp/tl260.rgba16.inc.c"
    ,
#include "actors/amp/tl261.rgba16.inc.c"
    ,
#include "actors/amp/tl262.rgba16.inc.c"
    ,
#include "actors/amp/tl263.rgba16.inc.c"
    ,
#include "actors/amp/tl264.rgba16.inc.c"
    ,
#include "actors/amp/tl265.rgba16.inc.c"
    ,
#include "actors/amp/tl266.rgba16.inc.c"
    ,
#include "actors/amp/tl267.rgba16.inc.c"
    ,
#include "actors/amp/tl268.rgba16.inc.c"
    ,
#include "actors/amp/tl269.rgba16.inc.c"
    ,
#include "actors/amp/tl270.rgba16.inc.c"
    ,
#include "actors/amp/tl271.rgba16.inc.c"
    ,
#include "actors/amp/tl272.rgba16.inc.c"
    ,
#include "actors/amp/tl273.rgba16.inc.c"
    ,
#include "actors/amp/tl274.rgba16.inc.c"
    ,
#include "actors/amp/tl275.rgba16.inc.c"
    ,
#include "actors/amp/tl276.rgba16.inc.c"
    ,
#include "actors/amp/tl277.rgba16.inc.c"
    ,
#include "actors/amp/tl278.rgba16.inc.c"
    ,
#include "actors/amp/tl279.rgba16.inc.c"
    ,
#include "actors/amp/tl280.rgba16.inc.c"
    ,
#include "actors/amp/tl281.rgba16.inc.c"
    ,
#include "actors/amp/tl282.rgba16.inc.c"
    ,
#include "actors/amp/tl283.rgba16.inc.c"
    ,
#include "actors/amp/tl284.rgba16.inc.c"
    ,
#include "actors/amp/tl285.rgba16.inc.c"
    ,
#include "actors/amp/tl286.rgba16.inc.c"
    ,
#include "actors/amp/tl287.rgba16.inc.c"
    ,
#include "actors/amp/tl288.rgba16.inc.c"
    ,
#include "actors/amp/tl289.rgba16.inc.c"
    ,
#include "actors/amp/tl290.rgba16.inc.c"
    ,
#include "actors/amp/tl291.rgba16.inc.c"
    ,
#include "actors/amp/tl292.rgba16.inc.c"
    ,
#include "actors/amp/tl293.rgba16.inc.c"
    ,
#include "actors/amp/tl294.rgba16.inc.c"
    ,
#include "actors/amp/tl295.rgba16.inc.c"
    ,
#include "actors/amp/tl296.rgba16.inc.c"
    ,
#include "actors/amp/tl297.rgba16.inc.c"
    ,
#include "actors/amp/tl298.rgba16.inc.c"
    ,
#include "actors/amp/tl299.rgba16.inc.c"
};

ALIGNED8 const u8 eman_tr_textures_dma[] = {
#include "actors/amp/tr0.rgba16.inc.c"
    ,
#include "actors/amp/tr1.rgba16.inc.c"
    ,
#include "actors/amp/tr2.rgba16.inc.c"
    ,
#include "actors/amp/tr3.rgba16.inc.c"
    ,
#include "actors/amp/tr4.rgba16.inc.c"
    ,
#include "actors/amp/tr5.rgba16.inc.c"
    ,
#include "actors/amp/tr6.rgba16.inc.c"
    ,
#include "actors/amp/tr7.rgba16.inc.c"
    ,
#include "actors/amp/tr8.rgba16.inc.c"
    ,
#include "actors/amp/tr9.rgba16.inc.c"
    ,
#include "actors/amp/tr10.rgba16.inc.c"
    ,
#include "actors/amp/tr11.rgba16.inc.c"
    ,
#include "actors/amp/tr12.rgba16.inc.c"
    ,
#include "actors/amp/tr13.rgba16.inc.c"
    ,
#include "actors/amp/tr14.rgba16.inc.c"
    ,
#include "actors/amp/tr15.rgba16.inc.c"
    ,
#include "actors/amp/tr16.rgba16.inc.c"
    ,
#include "actors/amp/tr17.rgba16.inc.c"
    ,
#include "actors/amp/tr18.rgba16.inc.c"
    ,
#include "actors/amp/tr19.rgba16.inc.c"
    ,
#include "actors/amp/tr20.rgba16.inc.c"
    ,
#include "actors/amp/tr21.rgba16.inc.c"
    ,
#include "actors/amp/tr22.rgba16.inc.c"
    ,
#include "actors/amp/tr23.rgba16.inc.c"
    ,
#include "actors/amp/tr24.rgba16.inc.c"
    ,
#include "actors/amp/tr25.rgba16.inc.c"
    ,
#include "actors/amp/tr26.rgba16.inc.c"
    ,
#include "actors/amp/tr27.rgba16.inc.c"
    ,
#include "actors/amp/tr28.rgba16.inc.c"
    ,
#include "actors/amp/tr29.rgba16.inc.c"
    ,
#include "actors/amp/tr30.rgba16.inc.c"
    ,
#include "actors/amp/tr31.rgba16.inc.c"
    ,
#include "actors/amp/tr32.rgba16.inc.c"
    ,
#include "actors/amp/tr33.rgba16.inc.c"
    ,
#include "actors/amp/tr34.rgba16.inc.c"
    ,
#include "actors/amp/tr35.rgba16.inc.c"
    ,
#include "actors/amp/tr36.rgba16.inc.c"
    ,
#include "actors/amp/tr37.rgba16.inc.c"
    ,
#include "actors/amp/tr38.rgba16.inc.c"
    ,
#include "actors/amp/tr39.rgba16.inc.c"
    ,
#include "actors/amp/tr40.rgba16.inc.c"
    ,
#include "actors/amp/tr41.rgba16.inc.c"
    ,
#include "actors/amp/tr42.rgba16.inc.c"
    ,
#include "actors/amp/tr43.rgba16.inc.c"
    ,
#include "actors/amp/tr44.rgba16.inc.c"
    ,
#include "actors/amp/tr45.rgba16.inc.c"
    ,
#include "actors/amp/tr46.rgba16.inc.c"
    ,
#include "actors/amp/tr47.rgba16.inc.c"
    ,
#include "actors/amp/tr48.rgba16.inc.c"
    ,
#include "actors/amp/tr49.rgba16.inc.c"
    ,
#include "actors/amp/tr50.rgba16.inc.c"
    ,
#include "actors/amp/tr51.rgba16.inc.c"
    ,
#include "actors/amp/tr52.rgba16.inc.c"
    ,
#include "actors/amp/tr53.rgba16.inc.c"
    ,
#include "actors/amp/tr54.rgba16.inc.c"
    ,
#include "actors/amp/tr55.rgba16.inc.c"
    ,
#include "actors/amp/tr56.rgba16.inc.c"
    ,
#include "actors/amp/tr57.rgba16.inc.c"
    ,
#include "actors/amp/tr58.rgba16.inc.c"
    ,
#include "actors/amp/tr59.rgba16.inc.c"
    ,
#include "actors/amp/tr60.rgba16.inc.c"
    ,
#include "actors/amp/tr61.rgba16.inc.c"
    ,
#include "actors/amp/tr62.rgba16.inc.c"
    ,
#include "actors/amp/tr63.rgba16.inc.c"
    ,
#include "actors/amp/tr64.rgba16.inc.c"
    ,
#include "actors/amp/tr65.rgba16.inc.c"
    ,
#include "actors/amp/tr66.rgba16.inc.c"
    ,
#include "actors/amp/tr67.rgba16.inc.c"
    ,
#include "actors/amp/tr68.rgba16.inc.c"
    ,
#include "actors/amp/tr69.rgba16.inc.c"
    ,
#include "actors/amp/tr70.rgba16.inc.c"
    ,
#include "actors/amp/tr71.rgba16.inc.c"
    ,
#include "actors/amp/tr72.rgba16.inc.c"
    ,
#include "actors/amp/tr73.rgba16.inc.c"
    ,
#include "actors/amp/tr74.rgba16.inc.c"
    ,
#include "actors/amp/tr75.rgba16.inc.c"
    ,
#include "actors/amp/tr76.rgba16.inc.c"
    ,
#include "actors/amp/tr77.rgba16.inc.c"
    ,
#include "actors/amp/tr78.rgba16.inc.c"
    ,
#include "actors/amp/tr79.rgba16.inc.c"
    ,
#include "actors/amp/tr80.rgba16.inc.c"
    ,
#include "actors/amp/tr81.rgba16.inc.c"
    ,
#include "actors/amp/tr82.rgba16.inc.c"
    ,
#include "actors/amp/tr83.rgba16.inc.c"
    ,
#include "actors/amp/tr84.rgba16.inc.c"
    ,
#include "actors/amp/tr85.rgba16.inc.c"
    ,
#include "actors/amp/tr86.rgba16.inc.c"
    ,
#include "actors/amp/tr87.rgba16.inc.c"
    ,
#include "actors/amp/tr88.rgba16.inc.c"
    ,
#include "actors/amp/tr89.rgba16.inc.c"
    ,
#include "actors/amp/tr90.rgba16.inc.c"
    ,
#include "actors/amp/tr91.rgba16.inc.c"
    ,
#include "actors/amp/tr92.rgba16.inc.c"
    ,
#include "actors/amp/tr93.rgba16.inc.c"
    ,
#include "actors/amp/tr94.rgba16.inc.c"
    ,
#include "actors/amp/tr95.rgba16.inc.c"
    ,
#include "actors/amp/tr96.rgba16.inc.c"
    ,
#include "actors/amp/tr97.rgba16.inc.c"
    ,
#include "actors/amp/tr98.rgba16.inc.c"
    ,
#include "actors/amp/tr99.rgba16.inc.c"
    ,
#include "actors/amp/tr100.rgba16.inc.c"
    ,
#include "actors/amp/tr101.rgba16.inc.c"
    ,
#include "actors/amp/tr102.rgba16.inc.c"
    ,
#include "actors/amp/tr103.rgba16.inc.c"
    ,
#include "actors/amp/tr104.rgba16.inc.c"
    ,
#include "actors/amp/tr105.rgba16.inc.c"
    ,
#include "actors/amp/tr106.rgba16.inc.c"
    ,
#include "actors/amp/tr107.rgba16.inc.c"
    ,
#include "actors/amp/tr108.rgba16.inc.c"
    ,
#include "actors/amp/tr109.rgba16.inc.c"
    ,
#include "actors/amp/tr110.rgba16.inc.c"
    ,
#include "actors/amp/tr111.rgba16.inc.c"
    ,
#include "actors/amp/tr112.rgba16.inc.c"
    ,
#include "actors/amp/tr113.rgba16.inc.c"
    ,
#include "actors/amp/tr114.rgba16.inc.c"
    ,
#include "actors/amp/tr115.rgba16.inc.c"
    ,
#include "actors/amp/tr116.rgba16.inc.c"
    ,
#include "actors/amp/tr117.rgba16.inc.c"
    ,
#include "actors/amp/tr118.rgba16.inc.c"
    ,
#include "actors/amp/tr119.rgba16.inc.c"
    ,
#include "actors/amp/tr120.rgba16.inc.c"
    ,
#include "actors/amp/tr121.rgba16.inc.c"
    ,
#include "actors/amp/tr122.rgba16.inc.c"
    ,
#include "actors/amp/tr123.rgba16.inc.c"
    ,
#include "actors/amp/tr124.rgba16.inc.c"
    ,
#include "actors/amp/tr125.rgba16.inc.c"
    ,
#include "actors/amp/tr126.rgba16.inc.c"
    ,
#include "actors/amp/tr127.rgba16.inc.c"
    ,
#include "actors/amp/tr128.rgba16.inc.c"
    ,
#include "actors/amp/tr129.rgba16.inc.c"
    ,
#include "actors/amp/tr130.rgba16.inc.c"
    ,
#include "actors/amp/tr131.rgba16.inc.c"
    ,
#include "actors/amp/tr132.rgba16.inc.c"
    ,
#include "actors/amp/tr133.rgba16.inc.c"
    ,
#include "actors/amp/tr134.rgba16.inc.c"
    ,
#include "actors/amp/tr135.rgba16.inc.c"
    ,
#include "actors/amp/tr136.rgba16.inc.c"
    ,
#include "actors/amp/tr137.rgba16.inc.c"
    ,
#include "actors/amp/tr138.rgba16.inc.c"
    ,
#include "actors/amp/tr139.rgba16.inc.c"
    ,
#include "actors/amp/tr140.rgba16.inc.c"
    ,
#include "actors/amp/tr141.rgba16.inc.c"
    ,
#include "actors/amp/tr142.rgba16.inc.c"
    ,
#include "actors/amp/tr143.rgba16.inc.c"
    ,
#include "actors/amp/tr144.rgba16.inc.c"
    ,
#include "actors/amp/tr145.rgba16.inc.c"
    ,
#include "actors/amp/tr146.rgba16.inc.c"
    ,
#include "actors/amp/tr147.rgba16.inc.c"
    ,
#include "actors/amp/tr148.rgba16.inc.c"
    ,
#include "actors/amp/tr149.rgba16.inc.c"
    ,
#include "actors/amp/tr150.rgba16.inc.c"
    ,
#include "actors/amp/tr151.rgba16.inc.c"
    ,
#include "actors/amp/tr152.rgba16.inc.c"
    ,
#include "actors/amp/tr153.rgba16.inc.c"
    ,
#include "actors/amp/tr154.rgba16.inc.c"
    ,
#include "actors/amp/tr155.rgba16.inc.c"
    ,
#include "actors/amp/tr156.rgba16.inc.c"
    ,
#include "actors/amp/tr157.rgba16.inc.c"
    ,
#include "actors/amp/tr158.rgba16.inc.c"
    ,
#include "actors/amp/tr159.rgba16.inc.c"
    ,
#include "actors/amp/tr160.rgba16.inc.c"
    ,
#include "actors/amp/tr161.rgba16.inc.c"
    ,
#include "actors/amp/tr162.rgba16.inc.c"
    ,
#include "actors/amp/tr163.rgba16.inc.c"
    ,
#include "actors/amp/tr164.rgba16.inc.c"
    ,
#include "actors/amp/tr165.rgba16.inc.c"
    ,
#include "actors/amp/tr166.rgba16.inc.c"
    ,
#include "actors/amp/tr167.rgba16.inc.c"
    ,
#include "actors/amp/tr168.rgba16.inc.c"
    ,
#include "actors/amp/tr169.rgba16.inc.c"
    ,
#include "actors/amp/tr170.rgba16.inc.c"
    ,
#include "actors/amp/tr171.rgba16.inc.c"
    ,
#include "actors/amp/tr172.rgba16.inc.c"
    ,
#include "actors/amp/tr173.rgba16.inc.c"
    ,
#include "actors/amp/tr174.rgba16.inc.c"
    ,
#include "actors/amp/tr175.rgba16.inc.c"
    ,
#include "actors/amp/tr176.rgba16.inc.c"
    ,
#include "actors/amp/tr177.rgba16.inc.c"
    ,
#include "actors/amp/tr178.rgba16.inc.c"
    ,
#include "actors/amp/tr179.rgba16.inc.c"
    ,
#include "actors/amp/tr180.rgba16.inc.c"
    ,
#include "actors/amp/tr181.rgba16.inc.c"
    ,
#include "actors/amp/tr182.rgba16.inc.c"
    ,
#include "actors/amp/tr183.rgba16.inc.c"
    ,
#include "actors/amp/tr184.rgba16.inc.c"
    ,
#include "actors/amp/tr185.rgba16.inc.c"
    ,
#include "actors/amp/tr186.rgba16.inc.c"
    ,
#include "actors/amp/tr187.rgba16.inc.c"
    ,
#include "actors/amp/tr188.rgba16.inc.c"
    ,
#include "actors/amp/tr189.rgba16.inc.c"
    ,
#include "actors/amp/tr190.rgba16.inc.c"
    ,
#include "actors/amp/tr191.rgba16.inc.c"
    ,
#include "actors/amp/tr192.rgba16.inc.c"
    ,
#include "actors/amp/tr193.rgba16.inc.c"
    ,
#include "actors/amp/tr194.rgba16.inc.c"
    ,
#include "actors/amp/tr195.rgba16.inc.c"
    ,
#include "actors/amp/tr196.rgba16.inc.c"
    ,
#include "actors/amp/tr197.rgba16.inc.c"
    ,
#include "actors/amp/tr198.rgba16.inc.c"
    ,
#include "actors/amp/tr199.rgba16.inc.c"
    ,
#include "actors/amp/tr200.rgba16.inc.c"
    ,
#include "actors/amp/tr201.rgba16.inc.c"
    ,
#include "actors/amp/tr202.rgba16.inc.c"
    ,
#include "actors/amp/tr203.rgba16.inc.c"
    ,
#include "actors/amp/tr204.rgba16.inc.c"
    ,
#include "actors/amp/tr205.rgba16.inc.c"
    ,
#include "actors/amp/tr206.rgba16.inc.c"
    ,
#include "actors/amp/tr207.rgba16.inc.c"
    ,
#include "actors/amp/tr208.rgba16.inc.c"
    ,
#include "actors/amp/tr209.rgba16.inc.c"
    ,
#include "actors/amp/tr210.rgba16.inc.c"
    ,
#include "actors/amp/tr211.rgba16.inc.c"
    ,
#include "actors/amp/tr212.rgba16.inc.c"
    ,
#include "actors/amp/tr213.rgba16.inc.c"
    ,
#include "actors/amp/tr214.rgba16.inc.c"
    ,
#include "actors/amp/tr215.rgba16.inc.c"
    ,
#include "actors/amp/tr216.rgba16.inc.c"
    ,
#include "actors/amp/tr217.rgba16.inc.c"
    ,
#include "actors/amp/tr218.rgba16.inc.c"
    ,
#include "actors/amp/tr219.rgba16.inc.c"
    ,
#include "actors/amp/tr220.rgba16.inc.c"
    ,
#include "actors/amp/tr221.rgba16.inc.c"
    ,
#include "actors/amp/tr222.rgba16.inc.c"
    ,
#include "actors/amp/tr223.rgba16.inc.c"
    ,
#include "actors/amp/tr224.rgba16.inc.c"
    ,
#include "actors/amp/tr225.rgba16.inc.c"
    ,
#include "actors/amp/tr226.rgba16.inc.c"
    ,
#include "actors/amp/tr227.rgba16.inc.c"
    ,
#include "actors/amp/tr228.rgba16.inc.c"
    ,
#include "actors/amp/tr229.rgba16.inc.c"
    ,
#include "actors/amp/tr230.rgba16.inc.c"
    ,
#include "actors/amp/tr231.rgba16.inc.c"
    ,
#include "actors/amp/tr232.rgba16.inc.c"
    ,
#include "actors/amp/tr233.rgba16.inc.c"
    ,
#include "actors/amp/tr234.rgba16.inc.c"
    ,
#include "actors/amp/tr235.rgba16.inc.c"
    ,
#include "actors/amp/tr236.rgba16.inc.c"
    ,
#include "actors/amp/tr237.rgba16.inc.c"
    ,
#include "actors/amp/tr238.rgba16.inc.c"
    ,
#include "actors/amp/tr239.rgba16.inc.c"
    ,
#include "actors/amp/tr240.rgba16.inc.c"
    ,
#include "actors/amp/tr241.rgba16.inc.c"
    ,
#include "actors/amp/tr242.rgba16.inc.c"
    ,
#include "actors/amp/tr243.rgba16.inc.c"
    ,
#include "actors/amp/tr244.rgba16.inc.c"
    ,
#include "actors/amp/tr245.rgba16.inc.c"
    ,
#include "actors/amp/tr246.rgba16.inc.c"
    ,
#include "actors/amp/tr247.rgba16.inc.c"
    ,
#include "actors/amp/tr248.rgba16.inc.c"
    ,
#include "actors/amp/tr249.rgba16.inc.c"
    ,
#include "actors/amp/tr250.rgba16.inc.c"
    ,
#include "actors/amp/tr251.rgba16.inc.c"
    ,
#include "actors/amp/tr252.rgba16.inc.c"
    ,
#include "actors/amp/tr253.rgba16.inc.c"
    ,
#include "actors/amp/tr254.rgba16.inc.c"
    ,
#include "actors/amp/tr255.rgba16.inc.c"
    ,
#include "actors/amp/tr256.rgba16.inc.c"
    ,
#include "actors/amp/tr257.rgba16.inc.c"
    ,
#include "actors/amp/tr258.rgba16.inc.c"
    ,
#include "actors/amp/tr259.rgba16.inc.c"
    ,
#include "actors/amp/tr260.rgba16.inc.c"
    ,
#include "actors/amp/tr261.rgba16.inc.c"
    ,
#include "actors/amp/tr262.rgba16.inc.c"
    ,
#include "actors/amp/tr263.rgba16.inc.c"
    ,
#include "actors/amp/tr264.rgba16.inc.c"
    ,
#include "actors/amp/tr265.rgba16.inc.c"
    ,
#include "actors/amp/tr266.rgba16.inc.c"
    ,
#include "actors/amp/tr267.rgba16.inc.c"
    ,
#include "actors/amp/tr268.rgba16.inc.c"
    ,
#include "actors/amp/tr269.rgba16.inc.c"
    ,
#include "actors/amp/tr270.rgba16.inc.c"
    ,
#include "actors/amp/tr271.rgba16.inc.c"
    ,
#include "actors/amp/tr272.rgba16.inc.c"
    ,
#include "actors/amp/tr273.rgba16.inc.c"
    ,
#include "actors/amp/tr274.rgba16.inc.c"
    ,
#include "actors/amp/tr275.rgba16.inc.c"
    ,
#include "actors/amp/tr276.rgba16.inc.c"
    ,
#include "actors/amp/tr277.rgba16.inc.c"
    ,
#include "actors/amp/tr278.rgba16.inc.c"
    ,
#include "actors/amp/tr279.rgba16.inc.c"
    ,
#include "actors/amp/tr280.rgba16.inc.c"
    ,
#include "actors/amp/tr281.rgba16.inc.c"
    ,
#include "actors/amp/tr282.rgba16.inc.c"
    ,
#include "actors/amp/tr283.rgba16.inc.c"
    ,
#include "actors/amp/tr284.rgba16.inc.c"
    ,
#include "actors/amp/tr285.rgba16.inc.c"
    ,
#include "actors/amp/tr286.rgba16.inc.c"
    ,
#include "actors/amp/tr287.rgba16.inc.c"
    ,
#include "actors/amp/tr288.rgba16.inc.c"
    ,
#include "actors/amp/tr289.rgba16.inc.c"
    ,
#include "actors/amp/tr290.rgba16.inc.c"
    ,
#include "actors/amp/tr291.rgba16.inc.c"
    ,
#include "actors/amp/tr292.rgba16.inc.c"
    ,
#include "actors/amp/tr293.rgba16.inc.c"
    ,
#include "actors/amp/tr294.rgba16.inc.c"
    ,
#include "actors/amp/tr295.rgba16.inc.c"
    ,
#include "actors/amp/tr296.rgba16.inc.c"
    ,
#include "actors/amp/tr297.rgba16.inc.c"
    ,
#include "actors/amp/tr298.rgba16.inc.c"
    ,
#include "actors/amp/tr299.rgba16.inc.c"
};

ALIGNED8 const u8 eman_bl_textures_dma[] = {
#include "actors/amp/bl0.rgba16.inc.c"
    ,
#include "actors/amp/bl1.rgba16.inc.c"
    ,
#include "actors/amp/bl2.rgba16.inc.c"
    ,
#include "actors/amp/bl3.rgba16.inc.c"
    ,
#include "actors/amp/bl4.rgba16.inc.c"
    ,
#include "actors/amp/bl5.rgba16.inc.c"
    ,
#include "actors/amp/bl6.rgba16.inc.c"
    ,
#include "actors/amp/bl7.rgba16.inc.c"
    ,
#include "actors/amp/bl8.rgba16.inc.c"
    ,
#include "actors/amp/bl9.rgba16.inc.c"
    ,
#include "actors/amp/bl10.rgba16.inc.c"
    ,
#include "actors/amp/bl11.rgba16.inc.c"
    ,
#include "actors/amp/bl12.rgba16.inc.c"
    ,
#include "actors/amp/bl13.rgba16.inc.c"
    ,
#include "actors/amp/bl14.rgba16.inc.c"
    ,
#include "actors/amp/bl15.rgba16.inc.c"
    ,
#include "actors/amp/bl16.rgba16.inc.c"
    ,
#include "actors/amp/bl17.rgba16.inc.c"
    ,
#include "actors/amp/bl18.rgba16.inc.c"
    ,
#include "actors/amp/bl19.rgba16.inc.c"
    ,
#include "actors/amp/bl20.rgba16.inc.c"
    ,
#include "actors/amp/bl21.rgba16.inc.c"
    ,
#include "actors/amp/bl22.rgba16.inc.c"
    ,
#include "actors/amp/bl23.rgba16.inc.c"
    ,
#include "actors/amp/bl24.rgba16.inc.c"
    ,
#include "actors/amp/bl25.rgba16.inc.c"
    ,
#include "actors/amp/bl26.rgba16.inc.c"
    ,
#include "actors/amp/bl27.rgba16.inc.c"
    ,
#include "actors/amp/bl28.rgba16.inc.c"
    ,
#include "actors/amp/bl29.rgba16.inc.c"
    ,
#include "actors/amp/bl30.rgba16.inc.c"
    ,
#include "actors/amp/bl31.rgba16.inc.c"
    ,
#include "actors/amp/bl32.rgba16.inc.c"
    ,
#include "actors/amp/bl33.rgba16.inc.c"
    ,
#include "actors/amp/bl34.rgba16.inc.c"
    ,
#include "actors/amp/bl35.rgba16.inc.c"
    ,
#include "actors/amp/bl36.rgba16.inc.c"
    ,
#include "actors/amp/bl37.rgba16.inc.c"
    ,
#include "actors/amp/bl38.rgba16.inc.c"
    ,
#include "actors/amp/bl39.rgba16.inc.c"
    ,
#include "actors/amp/bl40.rgba16.inc.c"
    ,
#include "actors/amp/bl41.rgba16.inc.c"
    ,
#include "actors/amp/bl42.rgba16.inc.c"
    ,
#include "actors/amp/bl43.rgba16.inc.c"
    ,
#include "actors/amp/bl44.rgba16.inc.c"
    ,
#include "actors/amp/bl45.rgba16.inc.c"
    ,
#include "actors/amp/bl46.rgba16.inc.c"
    ,
#include "actors/amp/bl47.rgba16.inc.c"
    ,
#include "actors/amp/bl48.rgba16.inc.c"
    ,
#include "actors/amp/bl49.rgba16.inc.c"
    ,
#include "actors/amp/bl50.rgba16.inc.c"
    ,
#include "actors/amp/bl51.rgba16.inc.c"
    ,
#include "actors/amp/bl52.rgba16.inc.c"
    ,
#include "actors/amp/bl53.rgba16.inc.c"
    ,
#include "actors/amp/bl54.rgba16.inc.c"
    ,
#include "actors/amp/bl55.rgba16.inc.c"
    ,
#include "actors/amp/bl56.rgba16.inc.c"
    ,
#include "actors/amp/bl57.rgba16.inc.c"
    ,
#include "actors/amp/bl58.rgba16.inc.c"
    ,
#include "actors/amp/bl59.rgba16.inc.c"
    ,
#include "actors/amp/bl60.rgba16.inc.c"
    ,
#include "actors/amp/bl61.rgba16.inc.c"
    ,
#include "actors/amp/bl62.rgba16.inc.c"
    ,
#include "actors/amp/bl63.rgba16.inc.c"
    ,
#include "actors/amp/bl64.rgba16.inc.c"
    ,
#include "actors/amp/bl65.rgba16.inc.c"
    ,
#include "actors/amp/bl66.rgba16.inc.c"
    ,
#include "actors/amp/bl67.rgba16.inc.c"
    ,
#include "actors/amp/bl68.rgba16.inc.c"
    ,
#include "actors/amp/bl69.rgba16.inc.c"
    ,
#include "actors/amp/bl70.rgba16.inc.c"
    ,
#include "actors/amp/bl71.rgba16.inc.c"
    ,
#include "actors/amp/bl72.rgba16.inc.c"
    ,
#include "actors/amp/bl73.rgba16.inc.c"
    ,
#include "actors/amp/bl74.rgba16.inc.c"
    ,
#include "actors/amp/bl75.rgba16.inc.c"
    ,
#include "actors/amp/bl76.rgba16.inc.c"
    ,
#include "actors/amp/bl77.rgba16.inc.c"
    ,
#include "actors/amp/bl78.rgba16.inc.c"
    ,
#include "actors/amp/bl79.rgba16.inc.c"
    ,
#include "actors/amp/bl80.rgba16.inc.c"
    ,
#include "actors/amp/bl81.rgba16.inc.c"
    ,
#include "actors/amp/bl82.rgba16.inc.c"
    ,
#include "actors/amp/bl83.rgba16.inc.c"
    ,
#include "actors/amp/bl84.rgba16.inc.c"
    ,
#include "actors/amp/bl85.rgba16.inc.c"
    ,
#include "actors/amp/bl86.rgba16.inc.c"
    ,
#include "actors/amp/bl87.rgba16.inc.c"
    ,
#include "actors/amp/bl88.rgba16.inc.c"
    ,
#include "actors/amp/bl89.rgba16.inc.c"
    ,
#include "actors/amp/bl90.rgba16.inc.c"
    ,
#include "actors/amp/bl91.rgba16.inc.c"
    ,
#include "actors/amp/bl92.rgba16.inc.c"
    ,
#include "actors/amp/bl93.rgba16.inc.c"
    ,
#include "actors/amp/bl94.rgba16.inc.c"
    ,
#include "actors/amp/bl95.rgba16.inc.c"
    ,
#include "actors/amp/bl96.rgba16.inc.c"
    ,
#include "actors/amp/bl97.rgba16.inc.c"
    ,
#include "actors/amp/bl98.rgba16.inc.c"
    ,
#include "actors/amp/bl99.rgba16.inc.c"
    ,
#include "actors/amp/bl100.rgba16.inc.c"
    ,
#include "actors/amp/bl101.rgba16.inc.c"
    ,
#include "actors/amp/bl102.rgba16.inc.c"
    ,
#include "actors/amp/bl103.rgba16.inc.c"
    ,
#include "actors/amp/bl104.rgba16.inc.c"
    ,
#include "actors/amp/bl105.rgba16.inc.c"
    ,
#include "actors/amp/bl106.rgba16.inc.c"
    ,
#include "actors/amp/bl107.rgba16.inc.c"
    ,
#include "actors/amp/bl108.rgba16.inc.c"
    ,
#include "actors/amp/bl109.rgba16.inc.c"
    ,
#include "actors/amp/bl110.rgba16.inc.c"
    ,
#include "actors/amp/bl111.rgba16.inc.c"
    ,
#include "actors/amp/bl112.rgba16.inc.c"
    ,
#include "actors/amp/bl113.rgba16.inc.c"
    ,
#include "actors/amp/bl114.rgba16.inc.c"
    ,
#include "actors/amp/bl115.rgba16.inc.c"
    ,
#include "actors/amp/bl116.rgba16.inc.c"
    ,
#include "actors/amp/bl117.rgba16.inc.c"
    ,
#include "actors/amp/bl118.rgba16.inc.c"
    ,
#include "actors/amp/bl119.rgba16.inc.c"
    ,
#include "actors/amp/bl120.rgba16.inc.c"
    ,
#include "actors/amp/bl121.rgba16.inc.c"
    ,
#include "actors/amp/bl122.rgba16.inc.c"
    ,
#include "actors/amp/bl123.rgba16.inc.c"
    ,
#include "actors/amp/bl124.rgba16.inc.c"
    ,
#include "actors/amp/bl125.rgba16.inc.c"
    ,
#include "actors/amp/bl126.rgba16.inc.c"
    ,
#include "actors/amp/bl127.rgba16.inc.c"
    ,
#include "actors/amp/bl128.rgba16.inc.c"
    ,
#include "actors/amp/bl129.rgba16.inc.c"
    ,
#include "actors/amp/bl130.rgba16.inc.c"
    ,
#include "actors/amp/bl131.rgba16.inc.c"
    ,
#include "actors/amp/bl132.rgba16.inc.c"
    ,
#include "actors/amp/bl133.rgba16.inc.c"
    ,
#include "actors/amp/bl134.rgba16.inc.c"
    ,
#include "actors/amp/bl135.rgba16.inc.c"
    ,
#include "actors/amp/bl136.rgba16.inc.c"
    ,
#include "actors/amp/bl137.rgba16.inc.c"
    ,
#include "actors/amp/bl138.rgba16.inc.c"
    ,
#include "actors/amp/bl139.rgba16.inc.c"
    ,
#include "actors/amp/bl140.rgba16.inc.c"
    ,
#include "actors/amp/bl141.rgba16.inc.c"
    ,
#include "actors/amp/bl142.rgba16.inc.c"
    ,
#include "actors/amp/bl143.rgba16.inc.c"
    ,
#include "actors/amp/bl144.rgba16.inc.c"
    ,
#include "actors/amp/bl145.rgba16.inc.c"
    ,
#include "actors/amp/bl146.rgba16.inc.c"
    ,
#include "actors/amp/bl147.rgba16.inc.c"
    ,
#include "actors/amp/bl148.rgba16.inc.c"
    ,
#include "actors/amp/bl149.rgba16.inc.c"
    ,
#include "actors/amp/bl150.rgba16.inc.c"
    ,
#include "actors/amp/bl151.rgba16.inc.c"
    ,
#include "actors/amp/bl152.rgba16.inc.c"
    ,
#include "actors/amp/bl153.rgba16.inc.c"
    ,
#include "actors/amp/bl154.rgba16.inc.c"
    ,
#include "actors/amp/bl155.rgba16.inc.c"
    ,
#include "actors/amp/bl156.rgba16.inc.c"
    ,
#include "actors/amp/bl157.rgba16.inc.c"
    ,
#include "actors/amp/bl158.rgba16.inc.c"
    ,
#include "actors/amp/bl159.rgba16.inc.c"
    ,
#include "actors/amp/bl160.rgba16.inc.c"
    ,
#include "actors/amp/bl161.rgba16.inc.c"
    ,
#include "actors/amp/bl162.rgba16.inc.c"
    ,
#include "actors/amp/bl163.rgba16.inc.c"
    ,
#include "actors/amp/bl164.rgba16.inc.c"
    ,
#include "actors/amp/bl165.rgba16.inc.c"
    ,
#include "actors/amp/bl166.rgba16.inc.c"
    ,
#include "actors/amp/bl167.rgba16.inc.c"
    ,
#include "actors/amp/bl168.rgba16.inc.c"
    ,
#include "actors/amp/bl169.rgba16.inc.c"
    ,
#include "actors/amp/bl170.rgba16.inc.c"
    ,
#include "actors/amp/bl171.rgba16.inc.c"
    ,
#include "actors/amp/bl172.rgba16.inc.c"
    ,
#include "actors/amp/bl173.rgba16.inc.c"
    ,
#include "actors/amp/bl174.rgba16.inc.c"
    ,
#include "actors/amp/bl175.rgba16.inc.c"
    ,
#include "actors/amp/bl176.rgba16.inc.c"
    ,
#include "actors/amp/bl177.rgba16.inc.c"
    ,
#include "actors/amp/bl178.rgba16.inc.c"
    ,
#include "actors/amp/bl179.rgba16.inc.c"
    ,
#include "actors/amp/bl180.rgba16.inc.c"
    ,
#include "actors/amp/bl181.rgba16.inc.c"
    ,
#include "actors/amp/bl182.rgba16.inc.c"
    ,
#include "actors/amp/bl183.rgba16.inc.c"
    ,
#include "actors/amp/bl184.rgba16.inc.c"
    ,
#include "actors/amp/bl185.rgba16.inc.c"
    ,
#include "actors/amp/bl186.rgba16.inc.c"
    ,
#include "actors/amp/bl187.rgba16.inc.c"
    ,
#include "actors/amp/bl188.rgba16.inc.c"
    ,
#include "actors/amp/bl189.rgba16.inc.c"
    ,
#include "actors/amp/bl190.rgba16.inc.c"
    ,
#include "actors/amp/bl191.rgba16.inc.c"
    ,
#include "actors/amp/bl192.rgba16.inc.c"
    ,
#include "actors/amp/bl193.rgba16.inc.c"
    ,
#include "actors/amp/bl194.rgba16.inc.c"
    ,
#include "actors/amp/bl195.rgba16.inc.c"
    ,
#include "actors/amp/bl196.rgba16.inc.c"
    ,
#include "actors/amp/bl197.rgba16.inc.c"
    ,
#include "actors/amp/bl198.rgba16.inc.c"
    ,
#include "actors/amp/bl199.rgba16.inc.c"
    ,
#include "actors/amp/bl200.rgba16.inc.c"
    ,
#include "actors/amp/bl201.rgba16.inc.c"
    ,
#include "actors/amp/bl202.rgba16.inc.c"
    ,
#include "actors/amp/bl203.rgba16.inc.c"
    ,
#include "actors/amp/bl204.rgba16.inc.c"
    ,
#include "actors/amp/bl205.rgba16.inc.c"
    ,
#include "actors/amp/bl206.rgba16.inc.c"
    ,
#include "actors/amp/bl207.rgba16.inc.c"
    ,
#include "actors/amp/bl208.rgba16.inc.c"
    ,
#include "actors/amp/bl209.rgba16.inc.c"
    ,
#include "actors/amp/bl210.rgba16.inc.c"
    ,
#include "actors/amp/bl211.rgba16.inc.c"
    ,
#include "actors/amp/bl212.rgba16.inc.c"
    ,
#include "actors/amp/bl213.rgba16.inc.c"
    ,
#include "actors/amp/bl214.rgba16.inc.c"
    ,
#include "actors/amp/bl215.rgba16.inc.c"
    ,
#include "actors/amp/bl216.rgba16.inc.c"
    ,
#include "actors/amp/bl217.rgba16.inc.c"
    ,
#include "actors/amp/bl218.rgba16.inc.c"
    ,
#include "actors/amp/bl219.rgba16.inc.c"
    ,
#include "actors/amp/bl220.rgba16.inc.c"
    ,
#include "actors/amp/bl221.rgba16.inc.c"
    ,
#include "actors/amp/bl222.rgba16.inc.c"
    ,
#include "actors/amp/bl223.rgba16.inc.c"
    ,
#include "actors/amp/bl224.rgba16.inc.c"
    ,
#include "actors/amp/bl225.rgba16.inc.c"
    ,
#include "actors/amp/bl226.rgba16.inc.c"
    ,
#include "actors/amp/bl227.rgba16.inc.c"
    ,
#include "actors/amp/bl228.rgba16.inc.c"
    ,
#include "actors/amp/bl229.rgba16.inc.c"
    ,
#include "actors/amp/bl230.rgba16.inc.c"
    ,
#include "actors/amp/bl231.rgba16.inc.c"
    ,
#include "actors/amp/bl232.rgba16.inc.c"
    ,
#include "actors/amp/bl233.rgba16.inc.c"
    ,
#include "actors/amp/bl234.rgba16.inc.c"
    ,
#include "actors/amp/bl235.rgba16.inc.c"
    ,
#include "actors/amp/bl236.rgba16.inc.c"
    ,
#include "actors/amp/bl237.rgba16.inc.c"
    ,
#include "actors/amp/bl238.rgba16.inc.c"
    ,
#include "actors/amp/bl239.rgba16.inc.c"
    ,
#include "actors/amp/bl240.rgba16.inc.c"
    ,
#include "actors/amp/bl241.rgba16.inc.c"
    ,
#include "actors/amp/bl242.rgba16.inc.c"
    ,
#include "actors/amp/bl243.rgba16.inc.c"
    ,
#include "actors/amp/bl244.rgba16.inc.c"
    ,
#include "actors/amp/bl245.rgba16.inc.c"
    ,
#include "actors/amp/bl246.rgba16.inc.c"
    ,
#include "actors/amp/bl247.rgba16.inc.c"
    ,
#include "actors/amp/bl248.rgba16.inc.c"
    ,
#include "actors/amp/bl249.rgba16.inc.c"
    ,
#include "actors/amp/bl250.rgba16.inc.c"
    ,
#include "actors/amp/bl251.rgba16.inc.c"
    ,
#include "actors/amp/bl252.rgba16.inc.c"
    ,
#include "actors/amp/bl253.rgba16.inc.c"
    ,
#include "actors/amp/bl254.rgba16.inc.c"
    ,
#include "actors/amp/bl255.rgba16.inc.c"
    ,
#include "actors/amp/bl256.rgba16.inc.c"
    ,
#include "actors/amp/bl257.rgba16.inc.c"
    ,
#include "actors/amp/bl258.rgba16.inc.c"
    ,
#include "actors/amp/bl259.rgba16.inc.c"
    ,
#include "actors/amp/bl260.rgba16.inc.c"
    ,
#include "actors/amp/bl261.rgba16.inc.c"
    ,
#include "actors/amp/bl262.rgba16.inc.c"
    ,
#include "actors/amp/bl263.rgba16.inc.c"
    ,
#include "actors/amp/bl264.rgba16.inc.c"
    ,
#include "actors/amp/bl265.rgba16.inc.c"
    ,
#include "actors/amp/bl266.rgba16.inc.c"
    ,
#include "actors/amp/bl267.rgba16.inc.c"
    ,
#include "actors/amp/bl268.rgba16.inc.c"
    ,
#include "actors/amp/bl269.rgba16.inc.c"
    ,
#include "actors/amp/bl270.rgba16.inc.c"
    ,
#include "actors/amp/bl271.rgba16.inc.c"
    ,
#include "actors/amp/bl272.rgba16.inc.c"
    ,
#include "actors/amp/bl273.rgba16.inc.c"
    ,
#include "actors/amp/bl274.rgba16.inc.c"
    ,
#include "actors/amp/bl275.rgba16.inc.c"
    ,
#include "actors/amp/bl276.rgba16.inc.c"
    ,
#include "actors/amp/bl277.rgba16.inc.c"
    ,
#include "actors/amp/bl278.rgba16.inc.c"
    ,
#include "actors/amp/bl279.rgba16.inc.c"
    ,
#include "actors/amp/bl280.rgba16.inc.c"
    ,
#include "actors/amp/bl281.rgba16.inc.c"
    ,
#include "actors/amp/bl282.rgba16.inc.c"
    ,
#include "actors/amp/bl283.rgba16.inc.c"
    ,
#include "actors/amp/bl284.rgba16.inc.c"
    ,
#include "actors/amp/bl285.rgba16.inc.c"
    ,
#include "actors/amp/bl286.rgba16.inc.c"
    ,
#include "actors/amp/bl287.rgba16.inc.c"
    ,
#include "actors/amp/bl288.rgba16.inc.c"
    ,
#include "actors/amp/bl289.rgba16.inc.c"
    ,
#include "actors/amp/bl290.rgba16.inc.c"
    ,
#include "actors/amp/bl291.rgba16.inc.c"
    ,
#include "actors/amp/bl292.rgba16.inc.c"
    ,
#include "actors/amp/bl293.rgba16.inc.c"
    ,
#include "actors/amp/bl294.rgba16.inc.c"
    ,
#include "actors/amp/bl295.rgba16.inc.c"
    ,
#include "actors/amp/bl296.rgba16.inc.c"
    ,
#include "actors/amp/bl297.rgba16.inc.c"
    ,
#include "actors/amp/bl298.rgba16.inc.c"
    ,
#include "actors/amp/bl299.rgba16.inc.c"
};

ALIGNED8 const u8 eman_br_textures_dma[] = {
#include "actors/amp/br0.rgba16.inc.c"
    ,
#include "actors/amp/br1.rgba16.inc.c"
    ,
#include "actors/amp/br2.rgba16.inc.c"
    ,
#include "actors/amp/br3.rgba16.inc.c"
    ,
#include "actors/amp/br4.rgba16.inc.c"
    ,
#include "actors/amp/br5.rgba16.inc.c"
    ,
#include "actors/amp/br6.rgba16.inc.c"
    ,
#include "actors/amp/br7.rgba16.inc.c"
    ,
#include "actors/amp/br8.rgba16.inc.c"
    ,
#include "actors/amp/br9.rgba16.inc.c"
    ,
#include "actors/amp/br10.rgba16.inc.c"
    ,
#include "actors/amp/br11.rgba16.inc.c"
    ,
#include "actors/amp/br12.rgba16.inc.c"
    ,
#include "actors/amp/br13.rgba16.inc.c"
    ,
#include "actors/amp/br14.rgba16.inc.c"
    ,
#include "actors/amp/br15.rgba16.inc.c"
    ,
#include "actors/amp/br16.rgba16.inc.c"
    ,
#include "actors/amp/br17.rgba16.inc.c"
    ,
#include "actors/amp/br18.rgba16.inc.c"
    ,
#include "actors/amp/br19.rgba16.inc.c"
    ,
#include "actors/amp/br20.rgba16.inc.c"
    ,
#include "actors/amp/br21.rgba16.inc.c"
    ,
#include "actors/amp/br22.rgba16.inc.c"
    ,
#include "actors/amp/br23.rgba16.inc.c"
    ,
#include "actors/amp/br24.rgba16.inc.c"
    ,
#include "actors/amp/br25.rgba16.inc.c"
    ,
#include "actors/amp/br26.rgba16.inc.c"
    ,
#include "actors/amp/br27.rgba16.inc.c"
    ,
#include "actors/amp/br28.rgba16.inc.c"
    ,
#include "actors/amp/br29.rgba16.inc.c"
    ,
#include "actors/amp/br30.rgba16.inc.c"
    ,
#include "actors/amp/br31.rgba16.inc.c"
    ,
#include "actors/amp/br32.rgba16.inc.c"
    ,
#include "actors/amp/br33.rgba16.inc.c"
    ,
#include "actors/amp/br34.rgba16.inc.c"
    ,
#include "actors/amp/br35.rgba16.inc.c"
    ,
#include "actors/amp/br36.rgba16.inc.c"
    ,
#include "actors/amp/br37.rgba16.inc.c"
    ,
#include "actors/amp/br38.rgba16.inc.c"
    ,
#include "actors/amp/br39.rgba16.inc.c"
    ,
#include "actors/amp/br40.rgba16.inc.c"
    ,
#include "actors/amp/br41.rgba16.inc.c"
    ,
#include "actors/amp/br42.rgba16.inc.c"
    ,
#include "actors/amp/br43.rgba16.inc.c"
    ,
#include "actors/amp/br44.rgba16.inc.c"
    ,
#include "actors/amp/br45.rgba16.inc.c"
    ,
#include "actors/amp/br46.rgba16.inc.c"
    ,
#include "actors/amp/br47.rgba16.inc.c"
    ,
#include "actors/amp/br48.rgba16.inc.c"
    ,
#include "actors/amp/br49.rgba16.inc.c"
    ,
#include "actors/amp/br50.rgba16.inc.c"
    ,
#include "actors/amp/br51.rgba16.inc.c"
    ,
#include "actors/amp/br52.rgba16.inc.c"
    ,
#include "actors/amp/br53.rgba16.inc.c"
    ,
#include "actors/amp/br54.rgba16.inc.c"
    ,
#include "actors/amp/br55.rgba16.inc.c"
    ,
#include "actors/amp/br56.rgba16.inc.c"
    ,
#include "actors/amp/br57.rgba16.inc.c"
    ,
#include "actors/amp/br58.rgba16.inc.c"
    ,
#include "actors/amp/br59.rgba16.inc.c"
    ,
#include "actors/amp/br60.rgba16.inc.c"
    ,
#include "actors/amp/br61.rgba16.inc.c"
    ,
#include "actors/amp/br62.rgba16.inc.c"
    ,
#include "actors/amp/br63.rgba16.inc.c"
    ,
#include "actors/amp/br64.rgba16.inc.c"
    ,
#include "actors/amp/br65.rgba16.inc.c"
    ,
#include "actors/amp/br66.rgba16.inc.c"
    ,
#include "actors/amp/br67.rgba16.inc.c"
    ,
#include "actors/amp/br68.rgba16.inc.c"
    ,
#include "actors/amp/br69.rgba16.inc.c"
    ,
#include "actors/amp/br70.rgba16.inc.c"
    ,
#include "actors/amp/br71.rgba16.inc.c"
    ,
#include "actors/amp/br72.rgba16.inc.c"
    ,
#include "actors/amp/br73.rgba16.inc.c"
    ,
#include "actors/amp/br74.rgba16.inc.c"
    ,
#include "actors/amp/br75.rgba16.inc.c"
    ,
#include "actors/amp/br76.rgba16.inc.c"
    ,
#include "actors/amp/br77.rgba16.inc.c"
    ,
#include "actors/amp/br78.rgba16.inc.c"
    ,
#include "actors/amp/br79.rgba16.inc.c"
    ,
#include "actors/amp/br80.rgba16.inc.c"
    ,
#include "actors/amp/br81.rgba16.inc.c"
    ,
#include "actors/amp/br82.rgba16.inc.c"
    ,
#include "actors/amp/br83.rgba16.inc.c"
    ,
#include "actors/amp/br84.rgba16.inc.c"
    ,
#include "actors/amp/br85.rgba16.inc.c"
    ,
#include "actors/amp/br86.rgba16.inc.c"
    ,
#include "actors/amp/br87.rgba16.inc.c"
    ,
#include "actors/amp/br88.rgba16.inc.c"
    ,
#include "actors/amp/br89.rgba16.inc.c"
    ,
#include "actors/amp/br90.rgba16.inc.c"
    ,
#include "actors/amp/br91.rgba16.inc.c"
    ,
#include "actors/amp/br92.rgba16.inc.c"
    ,
#include "actors/amp/br93.rgba16.inc.c"
    ,
#include "actors/amp/br94.rgba16.inc.c"
    ,
#include "actors/amp/br95.rgba16.inc.c"
    ,
#include "actors/amp/br96.rgba16.inc.c"
    ,
#include "actors/amp/br97.rgba16.inc.c"
    ,
#include "actors/amp/br98.rgba16.inc.c"
    ,
#include "actors/amp/br99.rgba16.inc.c"
    ,
#include "actors/amp/br100.rgba16.inc.c"
    ,
#include "actors/amp/br101.rgba16.inc.c"
    ,
#include "actors/amp/br102.rgba16.inc.c"
    ,
#include "actors/amp/br103.rgba16.inc.c"
    ,
#include "actors/amp/br104.rgba16.inc.c"
    ,
#include "actors/amp/br105.rgba16.inc.c"
    ,
#include "actors/amp/br106.rgba16.inc.c"
    ,
#include "actors/amp/br107.rgba16.inc.c"
    ,
#include "actors/amp/br108.rgba16.inc.c"
    ,
#include "actors/amp/br109.rgba16.inc.c"
    ,
#include "actors/amp/br110.rgba16.inc.c"
    ,
#include "actors/amp/br111.rgba16.inc.c"
    ,
#include "actors/amp/br112.rgba16.inc.c"
    ,
#include "actors/amp/br113.rgba16.inc.c"
    ,
#include "actors/amp/br114.rgba16.inc.c"
    ,
#include "actors/amp/br115.rgba16.inc.c"
    ,
#include "actors/amp/br116.rgba16.inc.c"
    ,
#include "actors/amp/br117.rgba16.inc.c"
    ,
#include "actors/amp/br118.rgba16.inc.c"
    ,
#include "actors/amp/br119.rgba16.inc.c"
    ,
#include "actors/amp/br120.rgba16.inc.c"
    ,
#include "actors/amp/br121.rgba16.inc.c"
    ,
#include "actors/amp/br122.rgba16.inc.c"
    ,
#include "actors/amp/br123.rgba16.inc.c"
    ,
#include "actors/amp/br124.rgba16.inc.c"
    ,
#include "actors/amp/br125.rgba16.inc.c"
    ,
#include "actors/amp/br126.rgba16.inc.c"
    ,
#include "actors/amp/br127.rgba16.inc.c"
    ,
#include "actors/amp/br128.rgba16.inc.c"
    ,
#include "actors/amp/br129.rgba16.inc.c"
    ,
#include "actors/amp/br130.rgba16.inc.c"
    ,
#include "actors/amp/br131.rgba16.inc.c"
    ,
#include "actors/amp/br132.rgba16.inc.c"
    ,
#include "actors/amp/br133.rgba16.inc.c"
    ,
#include "actors/amp/br134.rgba16.inc.c"
    ,
#include "actors/amp/br135.rgba16.inc.c"
    ,
#include "actors/amp/br136.rgba16.inc.c"
    ,
#include "actors/amp/br137.rgba16.inc.c"
    ,
#include "actors/amp/br138.rgba16.inc.c"
    ,
#include "actors/amp/br139.rgba16.inc.c"
    ,
#include "actors/amp/br140.rgba16.inc.c"
    ,
#include "actors/amp/br141.rgba16.inc.c"
    ,
#include "actors/amp/br142.rgba16.inc.c"
    ,
#include "actors/amp/br143.rgba16.inc.c"
    ,
#include "actors/amp/br144.rgba16.inc.c"
    ,
#include "actors/amp/br145.rgba16.inc.c"
    ,
#include "actors/amp/br146.rgba16.inc.c"
    ,
#include "actors/amp/br147.rgba16.inc.c"
    ,
#include "actors/amp/br148.rgba16.inc.c"
    ,
#include "actors/amp/br149.rgba16.inc.c"
    ,
#include "actors/amp/br150.rgba16.inc.c"
    ,
#include "actors/amp/br151.rgba16.inc.c"
    ,
#include "actors/amp/br152.rgba16.inc.c"
    ,
#include "actors/amp/br153.rgba16.inc.c"
    ,
#include "actors/amp/br154.rgba16.inc.c"
    ,
#include "actors/amp/br155.rgba16.inc.c"
    ,
#include "actors/amp/br156.rgba16.inc.c"
    ,
#include "actors/amp/br157.rgba16.inc.c"
    ,
#include "actors/amp/br158.rgba16.inc.c"
    ,
#include "actors/amp/br159.rgba16.inc.c"
    ,
#include "actors/amp/br160.rgba16.inc.c"
    ,
#include "actors/amp/br161.rgba16.inc.c"
    ,
#include "actors/amp/br162.rgba16.inc.c"
    ,
#include "actors/amp/br163.rgba16.inc.c"
    ,
#include "actors/amp/br164.rgba16.inc.c"
    ,
#include "actors/amp/br165.rgba16.inc.c"
    ,
#include "actors/amp/br166.rgba16.inc.c"
    ,
#include "actors/amp/br167.rgba16.inc.c"
    ,
#include "actors/amp/br168.rgba16.inc.c"
    ,
#include "actors/amp/br169.rgba16.inc.c"
    ,
#include "actors/amp/br170.rgba16.inc.c"
    ,
#include "actors/amp/br171.rgba16.inc.c"
    ,
#include "actors/amp/br172.rgba16.inc.c"
    ,
#include "actors/amp/br173.rgba16.inc.c"
    ,
#include "actors/amp/br174.rgba16.inc.c"
    ,
#include "actors/amp/br175.rgba16.inc.c"
    ,
#include "actors/amp/br176.rgba16.inc.c"
    ,
#include "actors/amp/br177.rgba16.inc.c"
    ,
#include "actors/amp/br178.rgba16.inc.c"
    ,
#include "actors/amp/br179.rgba16.inc.c"
    ,
#include "actors/amp/br180.rgba16.inc.c"
    ,
#include "actors/amp/br181.rgba16.inc.c"
    ,
#include "actors/amp/br182.rgba16.inc.c"
    ,
#include "actors/amp/br183.rgba16.inc.c"
    ,
#include "actors/amp/br184.rgba16.inc.c"
    ,
#include "actors/amp/br185.rgba16.inc.c"
    ,
#include "actors/amp/br186.rgba16.inc.c"
    ,
#include "actors/amp/br187.rgba16.inc.c"
    ,
#include "actors/amp/br188.rgba16.inc.c"
    ,
#include "actors/amp/br189.rgba16.inc.c"
    ,
#include "actors/amp/br190.rgba16.inc.c"
    ,
#include "actors/amp/br191.rgba16.inc.c"
    ,
#include "actors/amp/br192.rgba16.inc.c"
    ,
#include "actors/amp/br193.rgba16.inc.c"
    ,
#include "actors/amp/br194.rgba16.inc.c"
    ,
#include "actors/amp/br195.rgba16.inc.c"
    ,
#include "actors/amp/br196.rgba16.inc.c"
    ,
#include "actors/amp/br197.rgba16.inc.c"
    ,
#include "actors/amp/br198.rgba16.inc.c"
    ,
#include "actors/amp/br199.rgba16.inc.c"
    ,
#include "actors/amp/br200.rgba16.inc.c"
    ,
#include "actors/amp/br201.rgba16.inc.c"
    ,
#include "actors/amp/br202.rgba16.inc.c"
    ,
#include "actors/amp/br203.rgba16.inc.c"
    ,
#include "actors/amp/br204.rgba16.inc.c"
    ,
#include "actors/amp/br205.rgba16.inc.c"
    ,
#include "actors/amp/br206.rgba16.inc.c"
    ,
#include "actors/amp/br207.rgba16.inc.c"
    ,
#include "actors/amp/br208.rgba16.inc.c"
    ,
#include "actors/amp/br209.rgba16.inc.c"
    ,
#include "actors/amp/br210.rgba16.inc.c"
    ,
#include "actors/amp/br211.rgba16.inc.c"
    ,
#include "actors/amp/br212.rgba16.inc.c"
    ,
#include "actors/amp/br213.rgba16.inc.c"
    ,
#include "actors/amp/br214.rgba16.inc.c"
    ,
#include "actors/amp/br215.rgba16.inc.c"
    ,
#include "actors/amp/br216.rgba16.inc.c"
    ,
#include "actors/amp/br217.rgba16.inc.c"
    ,
#include "actors/amp/br218.rgba16.inc.c"
    ,
#include "actors/amp/br219.rgba16.inc.c"
    ,
#include "actors/amp/br220.rgba16.inc.c"
    ,
#include "actors/amp/br221.rgba16.inc.c"
    ,
#include "actors/amp/br222.rgba16.inc.c"
    ,
#include "actors/amp/br223.rgba16.inc.c"
    ,
#include "actors/amp/br224.rgba16.inc.c"
    ,
#include "actors/amp/br225.rgba16.inc.c"
    ,
#include "actors/amp/br226.rgba16.inc.c"
    ,
#include "actors/amp/br227.rgba16.inc.c"
    ,
#include "actors/amp/br228.rgba16.inc.c"
    ,
#include "actors/amp/br229.rgba16.inc.c"
    ,
#include "actors/amp/br230.rgba16.inc.c"
    ,
#include "actors/amp/br231.rgba16.inc.c"
    ,
#include "actors/amp/br232.rgba16.inc.c"
    ,
#include "actors/amp/br233.rgba16.inc.c"
    ,
#include "actors/amp/br234.rgba16.inc.c"
    ,
#include "actors/amp/br235.rgba16.inc.c"
    ,
#include "actors/amp/br236.rgba16.inc.c"
    ,
#include "actors/amp/br237.rgba16.inc.c"
    ,
#include "actors/amp/br238.rgba16.inc.c"
    ,
#include "actors/amp/br239.rgba16.inc.c"
    ,
#include "actors/amp/br240.rgba16.inc.c"
    ,
#include "actors/amp/br241.rgba16.inc.c"
    ,
#include "actors/amp/br242.rgba16.inc.c"
    ,
#include "actors/amp/br243.rgba16.inc.c"
    ,
#include "actors/amp/br244.rgba16.inc.c"
    ,
#include "actors/amp/br245.rgba16.inc.c"
    ,
#include "actors/amp/br246.rgba16.inc.c"
    ,
#include "actors/amp/br247.rgba16.inc.c"
    ,
#include "actors/amp/br248.rgba16.inc.c"
    ,
#include "actors/amp/br249.rgba16.inc.c"
    ,
#include "actors/amp/br250.rgba16.inc.c"
    ,
#include "actors/amp/br251.rgba16.inc.c"
    ,
#include "actors/amp/br252.rgba16.inc.c"
    ,
#include "actors/amp/br253.rgba16.inc.c"
    ,
#include "actors/amp/br254.rgba16.inc.c"
    ,
#include "actors/amp/br255.rgba16.inc.c"
    ,
#include "actors/amp/br256.rgba16.inc.c"
    ,
#include "actors/amp/br257.rgba16.inc.c"
    ,
#include "actors/amp/br258.rgba16.inc.c"
    ,
#include "actors/amp/br259.rgba16.inc.c"
    ,
#include "actors/amp/br260.rgba16.inc.c"
    ,
#include "actors/amp/br261.rgba16.inc.c"
    ,
#include "actors/amp/br262.rgba16.inc.c"
    ,
#include "actors/amp/br263.rgba16.inc.c"
    ,
#include "actors/amp/br264.rgba16.inc.c"
    ,
#include "actors/amp/br265.rgba16.inc.c"
    ,
#include "actors/amp/br266.rgba16.inc.c"
    ,
#include "actors/amp/br267.rgba16.inc.c"
    ,
#include "actors/amp/br268.rgba16.inc.c"
    ,
#include "actors/amp/br269.rgba16.inc.c"
    ,
#include "actors/amp/br270.rgba16.inc.c"
    ,
#include "actors/amp/br271.rgba16.inc.c"
    ,
#include "actors/amp/br272.rgba16.inc.c"
    ,
#include "actors/amp/br273.rgba16.inc.c"
    ,
#include "actors/amp/br274.rgba16.inc.c"
    ,
#include "actors/amp/br275.rgba16.inc.c"
    ,
#include "actors/amp/br276.rgba16.inc.c"
    ,
#include "actors/amp/br277.rgba16.inc.c"
    ,
#include "actors/amp/br278.rgba16.inc.c"
    ,
#include "actors/amp/br279.rgba16.inc.c"
    ,
#include "actors/amp/br280.rgba16.inc.c"
    ,
#include "actors/amp/br281.rgba16.inc.c"
    ,
#include "actors/amp/br282.rgba16.inc.c"
    ,
#include "actors/amp/br283.rgba16.inc.c"
    ,
#include "actors/amp/br284.rgba16.inc.c"
    ,
#include "actors/amp/br285.rgba16.inc.c"
    ,
#include "actors/amp/br286.rgba16.inc.c"
    ,
#include "actors/amp/br287.rgba16.inc.c"
    ,
#include "actors/amp/br288.rgba16.inc.c"
    ,
#include "actors/amp/br289.rgba16.inc.c"
    ,
#include "actors/amp/br290.rgba16.inc.c"
    ,
#include "actors/amp/br291.rgba16.inc.c"
    ,
#include "actors/amp/br292.rgba16.inc.c"
    ,
#include "actors/amp/br293.rgba16.inc.c"
    ,
#include "actors/amp/br294.rgba16.inc.c"
    ,
#include "actors/amp/br295.rgba16.inc.c"
    ,
#include "actors/amp/br296.rgba16.inc.c"
    ,
#include "actors/amp/br297.rgba16.inc.c"
    ,
#include "actors/amp/br298.rgba16.inc.c"
    ,
#include "actors/amp/br299.rgba16.inc.c"
};