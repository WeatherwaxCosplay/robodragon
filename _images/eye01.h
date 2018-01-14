
/*******************************************************************************
* image
* filename: unsaved
* name: dragoneye 001
*
* preset name: SSD1331_tImage
* data block size: 16 bit(s), uint16_t
* RLE compression enabled: no
* conversion type: Color, not_used not_used
* bits per pixel: 16
*
* preprocess:
*  main scan direction: top_to_bottom
*  line scan direction: forward
*  inverse: no
*******************************************************************************/

/*
 typedef struct {
     const uint16_t *data;
     uint16_t width;
     uint16_t height;
	 uint16_t pixels;
     uint8_t depth;
	 bool istrans;
	 uint16_t tcolor;
     } tImage;
*/
#include <stdint.h>



static const uint16_t image_data_eye01[4096] PROGMEM = {
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xad55, 0xb576, 0xc5d7, 0xce38, 0xd679, 0xdeba, 0xe6ba, 0xe6da, 0xe6da, 0xdeba, 0xdeba, 0xde99, 0xce59, 0xc618, 0xbdd7, 0xad76, 0xa575, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xad75, 0xbdd7, 0xd658, 0xe699, 0xeeba, 0xeeda, 0xeeda, 0xeeda, 0xeeda, 0xeeda, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xdeba, 0xc618, 0xad96, 0xa576, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xb575, 0xce18, 0xe6da, 0xef1b, 0xef1b, 0xef1b, 0xeefb, 0xeefb, 0xef1b, 0xef1b, 0xef1b, 0xeefb, 0xeedb, 0xeeda, 0xeeda, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xde99, 0xbdf7, 0xad76, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xad55, 0xcdf7, 0xeeda, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xeefb, 0xeefb, 0xef1b, 0xef1b, 0xef1b, 0xeefb, 0xeedb, 0xeeba, 0xeeda, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xeefb, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xe6da, 0xbdf7, 0xad75, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xad55, 0xc5b6, 0xe6ba, 0xeefb, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xeefb, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xeeda, 0xee9a, 0xeefa, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xeefb, 0xeefb, 0xeefb, 0xef1b, 0xef1b, 0xdeb9, 0xb596, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xb575, 0xde58, 0xe6da, 0xeefb, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xeefb, 0xeeda, 0xef1b, 0xef1b, 0xef1b, 0xeefa, 0xe6da, 0xeefa, 0xeefb, 0xeefb, 0xeefb, 0xeefb, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xe71b, 0xe6fa, 0xeefb, 0xeefb, 0xeefb, 0xeefb, 0xef1b, 0xef1b, 0xce38, 0xad75, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xc5b6, 0xde99, 0xe6da, 0xe6fb, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xeefb, 0xe6da, 0xeefb, 0xeefb, 0xeefb, 0xe6da, 0xe6da, 0xeefb, 0xef1b, 0xef1b, 0xeefb, 0xe6fb, 0xe6fa, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fa, 0xe6fa, 0xe6fa, 0xe6fa, 0xe6fa, 0xeefa, 0xeefa, 0xeefb, 0xef1b, 0xdeb9, 0xb596, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xad34, 0xcdf7, 0xde99, 0xe6da, 0xe6fb, 0xe6fb, 0xe6fb, 0xe71b, 0xef1b, 0xe71b, 0xe71b, 0xe6fb, 0xe6da, 0xe6da, 0xe6da, 0xeefb, 0xe6da, 0xe6fa, 0xeefb, 0xeefa, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6ba, 0xe6da, 0xe6da, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6b9, 0xe6ba, 0xe6da, 0xe6da, 0xe6fa, 0xeefa, 0xeefa, 0xe6da, 0xb5b6, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xad34, 0xd617, 0xde99, 0xe6da, 0xe6fa, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fa, 0xe6da, 0xe6da, 0xe6ba, 0xe6ba, 0xe6da, 0xe6da, 0xe6ba, 0xe6ba, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6b9, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6b9, 0xe699, 0xe6b9, 0xe6b9, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xeefa, 0xeefb, 0xbdd6, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xad34, 0xd617, 0xde99, 0xe6ba, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fa, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6b9, 0xe6ba, 0xe699, 0xe699, 0xe6ba, 0xe6da, 0xe6da, 0xe6da, 0xe6ba, 0xe6ba, 0xe6b9, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6b9, 0xe699, 0xe699, 0xe699, 0xe6b9, 0xe6da, 0xe6da, 0xeefa, 0xef1b, 0xb5b6, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa514, 0xd617, 0xdeb9, 0xe6ba, 0xe6ba, 0xe6da, 0xe6fa, 0xe6da, 0xe6da, 0xe6da, 0xe6fa, 0xe6fa, 0xe6da, 0xe6da, 0xe6ba, 0xe6b9, 0xe6ba, 0xe6ba, 0xe6ba, 0xe699, 0xe699, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6b9, 0xe699, 0xe699, 0xe699, 0xe699, 0xe699, 0xe6b9, 0xe6b9, 0xe6ba, 0xe6ba, 0xe6ba, 0xde9a, 0xde99, 0xde99, 0xde78, 0xe658, 0xe699, 0xe6b9, 0xe6da, 0xeefa, 0xe71b, 0xb5b6, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa534, 0xcdb6, 0xde99, 0xdeba, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6ba, 0xe699, 0xe6ba, 0xe6da, 0xe6da, 0xe6ba, 0xe699, 0xe6ba, 0xe6ba, 0xe69a, 0xe6b9, 0xe6b9, 0xe699, 0xe679, 0xe699, 0xde99, 0xe699, 0xe699, 0xe6b9, 0xdeb9, 0xdeb9, 0xe699, 0xde99, 0xde99, 0xde99, 0xde99, 0xde79, 0xde78, 0xde58, 0xe699, 0xe6b9, 0xe6b9, 0xe6fa, 0xe6fa, 0xad75, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa576, 0xa576, 0xa576, 0xa576, 0xa576, 0xa576, 0xa535, 0xbd34, 0xde79, 0xdeda, 0xdeba, 0xe6ba, 0xe6da, 0xe6da, 0xe6ba, 0xe6da, 0xe6da, 0xe6da, 0xe6ba, 0xe6ba, 0xe6ba, 0xde99, 0xe699, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6b9, 0xe699, 0xe6b9, 0xe699, 0xe699, 0xe699, 0xe699, 0xe679, 0xde79, 0xde99, 0xde99, 0xde99, 0xde99, 0xde99, 0xde99, 0xde99, 0xde99, 0xde99, 0xde79, 0xde99, 0xde79, 0xde78, 0xde78, 0xde78, 0xde58, 0xe658, 0xe699, 0xe6b9, 0xe71b, 0xdeba, 0xad75, 0xa576, 0xa576, 0xa576, 0xa576, 0xa576, 0xa576, 
    0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xa575, 0xad13, 0xd638, 0xdeba, 0xdeba, 0xdeb9, 0xe6b9, 0xdeba, 0xdeba, 0xdeba, 0xdeba, 0xdeba, 0xdeba, 0xdeb9, 0xdeb9, 0xde9a, 0xdeba, 0xdeba, 0xdeba, 0xdeba, 0xe699, 0xde99, 0xde58, 0xde38, 0xd637, 0xd617, 0xd637, 0xd637, 0xd637, 0xd637, 0xde58, 0xde58, 0xde79, 0xde99, 0xde99, 0xde99, 0xde99, 0xde79, 0xde79, 0xde78, 0xde78, 0xde78, 0xde78, 0xde78, 0xde58, 0xde58, 0xde58, 0xde37, 0xde38, 0xe699, 0xe6fa, 0xe71b, 0xce38, 0xa555, 0xa576, 0xa576, 0xa576, 0xa576, 0xa576, 
    0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xa513, 0xcdd6, 0xde99, 0xdeba, 0xde99, 0xde99, 0xdeb9, 0xdeb9, 0xdeba, 0xdeb9, 0xdeb9, 0xdeb9, 0xdeb9, 0xdeb9, 0xde99, 0xde99, 0xdeba, 0xdeba, 0xdeba, 0xde99, 0xd658, 0xc5b5, 0x9c70, 0x942d, 0x83cb, 0x734a, 0x6b49, 0x7baa, 0x738a, 0x8c2c, 0x9c8e, 0xb531, 0xc5b4, 0xd637, 0xd658, 0xde58, 0xde78, 0xde78, 0xde79, 0xde78, 0xde58, 0xde58, 0xd658, 0xd658, 0xd657, 0xd637, 0xd617, 0xde17, 0xde17, 0xde58, 0xe6da, 0xe6da, 0xe6fa, 0xbdb6, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 
    0xad76, 0xad76, 0xad76, 0xad76, 0xa535, 0xbd54, 0xd658, 0xdeba, 0xde59, 0xde78, 0xde58, 0xde79, 0xde99, 0xde99, 0xde99, 0xde99, 0xde99, 0xde99, 0xde99, 0xde79, 0xde99, 0xdeba, 0xde99, 0xce37, 0xad12, 0x736b, 0x6b28, 0x5ae7, 0x5286, 0x52e6, 0x4a86, 0x4245, 0x52e6, 0x5b26, 0x6366, 0x6346, 0x73a7, 0x7bc8, 0x8c2b, 0xacf1, 0xcdf6, 0xd658, 0xde78, 0xde58, 0xd658, 0xd658, 0xde57, 0xd658, 0xd637, 0xd637, 0xd637, 0xd617, 0xd637, 0xde37, 0xde58, 0xe6ba, 0xe6da, 0xe6fa, 0xdeb9, 0xad55, 0xad76, 0xad76, 0xad76, 0xad76, 
    0xad76, 0xad76, 0xad76, 0xad76, 0xa4f3, 0xcdd6, 0xde99, 0xde79, 0xde79, 0xde79, 0xde58, 0xd638, 0xde79, 0xde99, 0xde79, 0xde99, 0xde99, 0xde99, 0xde79, 0xde79, 0xde99, 0xd638, 0xa4b1, 0x6309, 0x5287, 0x4226, 0x39c5, 0x31e5, 0x31c5, 0x31e5, 0x31c5, 0x31c5, 0x3a05, 0x4265, 0x42a5, 0x4aa5, 0x4ac5, 0x5306, 0x6b67, 0x6b67, 0x7bca, 0xa4f1, 0xcdf6, 0xd638, 0xd638, 0xd658, 0xd637, 0xd637, 0xd617, 0xd637, 0xd637, 0xd637, 0xd637, 0xd637, 0xde37, 0xe699, 0xe6da, 0xe6da, 0xe6da, 0xc5f6, 0xad76, 0xad76, 0xad76, 0xad76, 
    0xad96, 0xad96, 0xad96, 0xa534, 0xbd74, 0xd678, 0xde99, 0xde79, 0xde78, 0xd658, 0xde78, 0xde58, 0xd638, 0xde78, 0xde58, 0xde78, 0xde79, 0xd658, 0xde79, 0xd679, 0xc5b6, 0x736c, 0x4227, 0x39e6, 0x31c5, 0x31a5, 0x31e4, 0x3224, 0x3264, 0x3284, 0x3224, 0x3204, 0x3264, 0x3265, 0x3265, 0x3225, 0x31e5, 0x3a05, 0x3a25, 0x4a86, 0x52e6, 0x6347, 0x8c2c, 0xc594, 0xd637, 0xd637, 0xd637, 0xd637, 0xd637, 0xd617, 0xd637, 0xd657, 0xd637, 0xd637, 0xd617, 0xde37, 0xe6da, 0xe6fa, 0xe6da, 0xe6da, 0xad34, 0xad96, 0xad76, 0xad76, 
    0xad96, 0xad96, 0xad96, 0xa4f3, 0xce17, 0xd699, 0xd678, 0xd658, 0xde58, 0xd658, 0xd658, 0xd658, 0xd617, 0xd658, 0xd658, 0xd658, 0xd679, 0xd658, 0xd658, 0xb533, 0x5ac9, 0x3a06, 0x31c5, 0x29c4, 0x3204, 0x2a44, 0x32c4, 0x3364, 0x3344, 0x3324, 0x32a4, 0x29c4, 0x3224, 0x3284, 0x32c4, 0x3ae5, 0x3ae5, 0x3ac5, 0x3a85, 0x3a45, 0x3a25, 0x4226, 0x52c7, 0x73a9, 0xb532, 0xd5f6, 0xd617, 0xd637, 0xd617, 0xd5f6, 0xd637, 0xd637, 0xd637, 0xd617, 0xd5f6, 0xd5d5, 0xde58, 0xe6fa, 0xe6da, 0xe6ba, 0xbdd6, 0xad96, 0xad96, 0xad96, 
    0xad96, 0xad96, 0xa555, 0xb554, 0xd637, 0xd679, 0xd638, 0xd658, 0xd658, 0xd658, 0xd658, 0xd637, 0xd617, 0xd617, 0xd638, 0xd638, 0xd658, 0xd617, 0xacf2, 0x52a8, 0x3a06, 0x31e5, 0x29e4, 0x3244, 0x32a4, 0x32e4, 0x3304, 0x3bc4, 0x3344, 0x32e4, 0x2a44, 0x2944, 0x2984, 0x3224, 0x3284, 0x32e4, 0x3b05, 0x3b85, 0x3b25, 0x3ac5, 0x3a65, 0x3a45, 0x3a26, 0x4226, 0x6308, 0xacd1, 0xcdd6, 0xd617, 0xd617, 0xd616, 0xd616, 0xd616, 0xcdf6, 0xd5d6, 0xd5d5, 0xd594, 0xd5f6, 0xe6b9, 0xe6fa, 0xe6da, 0xde99, 0xa534, 0xad96, 0xad96, 
    0xad96, 0xad96, 0x9cd2, 0xc5b5, 0xce17, 0xd658, 0xd637, 0xd638, 0xd638, 0xd638, 0xd637, 0xd637, 0xd637, 0xd5f7, 0xcdd6, 0xd637, 0xd617, 0xad13, 0x5288, 0x39e5, 0x3205, 0x2a24, 0x2a64, 0x32e4, 0x3344, 0x3344, 0x3324, 0x3384, 0x3364, 0x32c4, 0x29e4, 0x2944, 0x2944, 0x29c4, 0x32c4, 0x3304, 0x3b24, 0x3b25, 0x3b45, 0x3ae5, 0x3a85, 0x3aa5, 0x3a65, 0x3a05, 0x4206, 0x5288, 0xacf2, 0xcdf6, 0xcdf6, 0xcdf6, 0xcdf6, 0xcdf6, 0xcdb5, 0xcdb5, 0xcd94, 0xcd74, 0xcdb5, 0xde37, 0xe6da, 0xe6da, 0xe6da, 0xb595, 0xad96, 0xad96, 
    0xad96, 0xad96, 0xa4d2, 0xcdb6, 0xcdf7, 0xd617, 0xd617, 0xce17, 0xd617, 0xce37, 0xce17, 0xce17, 0xce17, 0xd617, 0xd5f7, 0xd5f7, 0xbd54, 0x5ac9, 0x31c5, 0x29c4, 0x2a04, 0x32a4, 0x3344, 0x3384, 0x33a4, 0x33a3, 0x3363, 0x2b03, 0x3363, 0x32c4, 0x2164, 0x2124, 0x2924, 0x2984, 0x32c4, 0x32e4, 0x3b64, 0x3b65, 0x3b85, 0x3b25, 0x3b05, 0x3ae5, 0x3aa5, 0x3a45, 0x3a05, 0x4206, 0x62e9, 0xbd74, 0xcdd6, 0xcdf6, 0xcdf6, 0xcdf6, 0xcd95, 0xcd94, 0xcd94, 0xcd95, 0xcd95, 0xd595, 0xe698, 0xe6da, 0xe6d9, 0xce17, 0xad76, 0xad96, 
    0xad96, 0xa514, 0xb513, 0xc5b6, 0xcdf6, 0xcdf7, 0xcdf7, 0xcdf7, 0xce17, 0xce17, 0xcdf7, 0xce17, 0xce17, 0xce17, 0xcdf7, 0xc575, 0x734b, 0x39e6, 0x29a4, 0x2a24, 0x32a4, 0x2ae4, 0x33a3, 0x33c3, 0x3323, 0x3383, 0x33a3, 0x2ae3, 0x3363, 0x2a43, 0x2124, 0x2104, 0x2124, 0x2944, 0x32a4, 0x3b24, 0x3ba4, 0x3bc4, 0x3b85, 0x4ca5, 0x3b25, 0x3b25, 0x3b25, 0x3ac5, 0x3a65, 0x3a26, 0x4226, 0x738c, 0xc5b5, 0xcdf6, 0xcdd6, 0xcdb5, 0xcd95, 0xc594, 0xc574, 0xc594, 0xcd95, 0xcd95, 0xd5f6, 0xe6b9, 0xe6d9, 0xdeb9, 0xa534, 0xad96, 
    0xad96, 0x9cd2, 0xbd74, 0xcdb5, 0xcdf6, 0xcdf6, 0xcdd6, 0xcdf6, 0xcdf6, 0xcdf6, 0xcdd6, 0xcdd6, 0xcdd6, 0xcdf7, 0xcdf6, 0x9c50, 0x4226, 0x29a5, 0x29e4, 0x32e4, 0x3be4, 0x3c23, 0x3c03, 0x33e3, 0x3383, 0x3363, 0x3c03, 0x3343, 0x2ac3, 0x21a3, 0x2103, 0x2104, 0x2104, 0x2924, 0x2a24, 0x3344, 0x3be4, 0x4c84, 0x4ce4, 0x4cc5, 0x43a5, 0x43a5, 0x4c85, 0x4c85, 0x4c25, 0x42c6, 0x3a26, 0x4a47, 0xa4d1, 0xcdd5, 0xc5b5, 0xc5b5, 0xc594, 0xc594, 0xc594, 0xc594, 0xc595, 0xcdb5, 0xcdb5, 0xde78, 0xe6b9, 0xe6d9, 0xb575, 0xad96, 
    0xad96, 0x9c91, 0xbd54, 0xc5b5, 0xcdb6, 0xc5b6, 0xc5d6, 0xcdd6, 0xcdd6, 0xcdd6, 0xcdd6, 0xcdd6, 0xcdd6, 0xcdd6, 0xbd74, 0x5ae9, 0x31c5, 0x29c4, 0x2a64, 0x2ac4, 0x3363, 0x3be3, 0x3c43, 0x3c63, 0x3c03, 0x3363, 0x2ac3, 0x2ac3, 0x21c3, 0x2123, 0x2103, 0x2103, 0x2104, 0x2124, 0x29a4, 0x32e4, 0x4424, 0x4ca4, 0x4cc4, 0x4464, 0x4405, 0x43c5, 0x4cc5, 0x54e5, 0x4c45, 0x4345, 0x3a46, 0x4226, 0x630a, 0xbd74, 0xc5b5, 0xc5b5, 0xc594, 0xc574, 0xc574, 0xc574, 0xc594, 0xc595, 0xcdb5, 0xd5f6, 0xe699, 0xdeb9, 0xbdb5, 0xad96, 
    0xad76, 0x9c70, 0xbd13, 0xc575, 0xc5b5, 0xc5b5, 0xc5b6, 0xc5b6, 0xc5b6, 0xc5b6, 0xc5b6, 0xcdb6, 0xcdb6, 0xc5b5, 0x9c70, 0x4246, 0x29a4, 0x2a44, 0x3304, 0x3383, 0x3363, 0x3343, 0x3c03, 0x3c63, 0x33a3, 0x3363, 0x2a63, 0x2223, 0x2183, 0x2103, 0x2103, 0x2103, 0x2104, 0x2104, 0x2964, 0x32a4, 0x3b64, 0x4484, 0x4ca4, 0x4c84, 0x4c84, 0x4c85, 0x5505, 0x5545, 0x4c25, 0x4c25, 0x42a6, 0x3a46, 0x4227, 0x9c90, 0xbd94, 0xbd94, 0xc594, 0xc574, 0xc574, 0xbd53, 0xc574, 0xc594, 0xc594, 0xcdb5, 0xe678, 0xde99, 0xd637, 0xa555, 
    0xa534, 0xa4b1, 0xbd53, 0xc595, 0xc595, 0xc595, 0xc595, 0xc595, 0xc575, 0xbd54, 0xc574, 0xc574, 0xc574, 0xbd54, 0x6b4a, 0x31c5, 0x29a4, 0x32e4, 0x3be3, 0x3c03, 0x3c03, 0x33a3, 0x3c23, 0x3c23, 0x33a3, 0x2ac3, 0x2263, 0x21e3, 0x2163, 0x20e3, 0x20e3, 0x2103, 0x2103, 0x2104, 0x2144, 0x32c4, 0x4444, 0x4444, 0x4444, 0x4ce4, 0x4c84, 0x4ca4, 0x4c85, 0x43e5, 0x43c5, 0x4ca5, 0x42e5, 0x3a45, 0x4246, 0x734b, 0xbd73, 0xbd94, 0xbd74, 0xbd74, 0xbd53, 0xbd33, 0xbd53, 0xbd54, 0xc574, 0xc574, 0xde17, 0xde78, 0xdeb9, 0xa514, 
    0x9cf3, 0xacd2, 0xbd54, 0xbd74, 0xc574, 0xbd54, 0xbd54, 0xbd54, 0xbd74, 0xc595, 0xc595, 0xc595, 0xc574, 0xb4f2, 0x4267, 0x29a4, 0x2a04, 0x3323, 0x33a3, 0x3be3, 0x33c3, 0x3c03, 0x3c03, 0x3363, 0x2b23, 0x2283, 0x2203, 0x21c3, 0x2123, 0x20e3, 0x20e3, 0x2103, 0x2103, 0x2103, 0x2124, 0x2a24, 0x3ba4, 0x3c04, 0x4464, 0x44a4, 0x5504, 0x4c84, 0x4ca5, 0x4c45, 0x4405, 0x4c65, 0x4365, 0x42c5, 0x42e6, 0x4aa7, 0xad12, 0xbd74, 0xbd74, 0xbd53, 0xbd13, 0xbd13, 0xbd53, 0xbd53, 0xbd53, 0xc553, 0xd5d6, 0xde17, 0xdeb9, 0xad34, 
    0x9cb2, 0xb4d2, 0xbd33, 0xbd54, 0xbd74, 0xbd74, 0xbd74, 0xbd74, 0xbd54, 0xbd74, 0xc574, 0xbd74, 0xbd74, 0x942f, 0x3a25, 0x29c4, 0x2aa3, 0x3c03, 0x3be3, 0x33a3, 0x33e3, 0x3c23, 0x33c3, 0x2b43, 0x2aa3, 0x21e3, 0x2223, 0x21a3, 0x1903, 0x18e3, 0x20e3, 0x20e3, 0x2103, 0x2103, 0x2103, 0x29a4, 0x32e4, 0x3be4, 0x44a4, 0x44a4, 0x4cc4, 0x4ce4, 0x4ce4, 0x4c65, 0x43c5, 0x43c5, 0x4c25, 0x4385, 0x42e5, 0x4246, 0x9c2e, 0xbd12, 0xbd12, 0xbcf2, 0xb512, 0xbd12, 0xbd33, 0xbd33, 0xbd33, 0xc553, 0xd5b5, 0xde37, 0xde78, 0xad54, 
    0x9491, 0xacd2, 0xb513, 0xbd34, 0xbd54, 0xbd54, 0xbd54, 0xbd54, 0xbd54, 0xbd54, 0xbd74, 0xbd54, 0xbd54, 0x73ac, 0x31c5, 0x29c4, 0x3323, 0x3c03, 0x33c3, 0x33a3, 0x33a3, 0x33e3, 0x2b43, 0x2ac3, 0x2223, 0x21a3, 0x21a3, 0x1943, 0x18e3, 0x18e3, 0x20e3, 0x20e3, 0x20e3, 0x2103, 0x2103, 0x21a4, 0x32e4, 0x3ba4, 0x3be4, 0x44a4, 0x4424, 0x4c84, 0x5524, 0x4c84, 0x4405, 0x43a5, 0x54c5, 0x4365, 0x4305, 0x3a26, 0x732b, 0xb470, 0xbcb1, 0xb491, 0xb4f2, 0xb512, 0xb512, 0xb4f2, 0xbd12, 0xbd33, 0xcd74, 0xde37, 0xde57, 0xb574, 
    0x9471, 0xacb1, 0xb513, 0xb513, 0xbd33, 0xbd34, 0xbd54, 0xbd54, 0xbd54, 0xbd54, 0xbd54, 0xbd54, 0xb534, 0x632a, 0x29c4, 0x29e3, 0x2aa3, 0x3383, 0x3c03, 0x3c03, 0x3c43, 0x3be3, 0x2ac3, 0x2283, 0x2203, 0x21c3, 0x1963, 0x1903, 0x18e3, 0x18e3, 0x18e3, 0x20e3, 0x20e3, 0x20e3, 0x2103, 0x2163, 0x2a03, 0x2a44, 0x3304, 0x3c04, 0x3bc4, 0x3be4, 0x4404, 0x3b64, 0x3b44, 0x32a4, 0x3b45, 0x3ac5, 0x3225, 0x3a05, 0x62a9, 0xb470, 0xb42f, 0xb44f, 0xb4b0, 0xb4b1, 0xb490, 0xb490, 0xb4d1, 0xbcf2, 0xc512, 0xde16, 0xde37, 0xb574, 
    0x9471, 0xac70, 0xb4b2, 0xb4d2, 0xb513, 0xb533, 0xb554, 0xb554, 0xb554, 0xb554, 0xbd54, 0xb533, 0xb513, 0x52a8, 0x29a4, 0x21a3, 0x2203, 0x2a83, 0x2ac3, 0x3363, 0x3383, 0x2b03, 0x2283, 0x2203, 0x19a2, 0x21c2, 0x1943, 0x18e3, 0x18c3, 0x18e3, 0x18e3, 0x18e3, 0x20e3, 0x20e3, 0x2103, 0x2183, 0x2a03, 0x2a23, 0x32c3, 0x3343, 0x3be4, 0x3324, 0x4404, 0x3b64, 0x32e4, 0x3284, 0x3ac4, 0x3aa5, 0x3245, 0x3a05, 0x5268, 0xac50, 0xb42f, 0xb3ce, 0xb44f, 0xb490, 0xb450, 0xb42f, 0xb450, 0xb490, 0xc4f2, 0xd5f5, 0xddf6, 0xb554, 
    0x9471, 0xac70, 0xac91, 0xb4f3, 0xb513, 0xb513, 0xb533, 0xb554, 0xb534, 0xb533, 0xb533, 0xb533, 0xacf2, 0x4a87, 0x29a4, 0x21e3, 0x3323, 0x3363, 0x3383, 0x2b03, 0x2ae3, 0x22a2, 0x2ac2, 0x2242, 0x21e2, 0x1982, 0x1902, 0x18e3, 0x18c3, 0x18c3, 0x18e3, 0x18e3, 0x18e3, 0x20e3, 0x20e3, 0x21a3, 0x2a63, 0x2a43, 0x2a83, 0x3303, 0x3c03, 0x32c4, 0x3344, 0x3b44, 0x2a24, 0x3284, 0x43c4, 0x3b24, 0x3285, 0x3205, 0x5287, 0xabee, 0xabee, 0xabae, 0xabae, 0xabce, 0xabae, 0xabce, 0xabce, 0xb40f, 0xbc90, 0xc533, 0xd553, 0xbd34, 
    0x9471, 0xac71, 0xacb2, 0xb4f3, 0xb533, 0xb513, 0xb513, 0xb513, 0xb533, 0xb513, 0xb513, 0xb513, 0xacd2, 0x4aa6, 0x29e4, 0x2a43, 0x33a3, 0x3363, 0x2b03, 0x2aa3, 0x2243, 0x2222, 0x22a2, 0x22a2, 0x2202, 0x1962, 0x1922, 0x18e2, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18e3, 0x18e3, 0x2183, 0x2a83, 0x2a83, 0x2aa3, 0x2ac3, 0x3ba3, 0x3343, 0x32e3, 0x32a4, 0x32a4, 0x3b44, 0x4424, 0x43e4, 0x3aa4, 0x3225, 0x5287, 0xac2e, 0xac4f, 0xac2f, 0xac4f, 0xac4f, 0xac4f, 0xac6f, 0xac0f, 0xabae, 0xb470, 0xbc91, 0xc470, 0xb4f2, 
    0x9471, 0xa470, 0xacb1, 0xb4f2, 0xad12, 0xb513, 0xacf2, 0xacf2, 0xb4f2, 0xacf2, 0xacf2, 0xb512, 0xacd2, 0x4aa6, 0x29c4, 0x21e3, 0x2a63, 0x2ac3, 0x2b23, 0x3363, 0x3383, 0x2282, 0x2262, 0x22a2, 0x2262, 0x19a2, 0x1962, 0x18e2, 0x18c2, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18e3, 0x18e3, 0x2143, 0x3323, 0x3363, 0x3323, 0x2b03, 0x3323, 0x3ba3, 0x3ba3, 0x3363, 0x3b64, 0x3344, 0x4424, 0x3b44, 0x3244, 0x3204, 0x4a26, 0xa3ce, 0xac70, 0xac70, 0xac6f, 0xa470, 0xa470, 0xac6f, 0xac6f, 0xabee, 0xb40f, 0xb450, 0xbcb1, 0xacd2, 
    0x9cb2, 0xa450, 0xacb1, 0xacf2, 0xad13, 0xacf2, 0xacf2, 0xacd2, 0xacb1, 0xacb1, 0xacd1, 0xacb1, 0xa491, 0x52c7, 0x29a4, 0x2183, 0x2243, 0x2b03, 0x3363, 0x2b23, 0x2ae2, 0x2222, 0x2222, 0x2262, 0x2262, 0x2a82, 0x19a2, 0x18e2, 0x18c2, 0x18c2, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18e3, 0x2143, 0x2a63, 0x2ac3, 0x2b03, 0x3323, 0x2ae3, 0x3323, 0x3343, 0x3be3, 0x3b83, 0x3363, 0x3bc4, 0x3324, 0x2a04, 0x31e4, 0x5287, 0xa3ad, 0xa44f, 0xac50, 0xa44f, 0xa470, 0xa470, 0xa44f, 0xac2f, 0xac0e, 0xabce, 0xb40f, 0xb4b1, 0xacd2, 
    0x9cf3, 0x9c50, 0xa4b1, 0xacf2, 0xad12, 0xacf2, 0xacf2, 0xacf2, 0xacf2, 0xacb1, 0xacf2, 0xacf2, 0xacd2, 0x6349, 0x29a4, 0x2183, 0x2a83, 0x3363, 0x2b43, 0x2ac3, 0x22a2, 0x2222, 0x2b02, 0x22a2, 0x1a02, 0x33a2, 0x2aa2, 0x1922, 0x18c2, 0x18c2, 0x18c2, 0x18c2, 0x18c2, 0x18c3, 0x18c3, 0x2183, 0x21e3, 0x2263, 0x2a83, 0x3343, 0x2b03, 0x3323, 0x2a83, 0x3383, 0x3c23, 0x4463, 0x4424, 0x3b44, 0x2a04, 0x31e4, 0x62a8, 0xa3ad, 0xa42f, 0xa44f, 0xa42f, 0xa42f, 0xa42f, 0xa40e, 0xa40e, 0xa42f, 0xa3ce, 0xac2f, 0xb4b1, 0xa4d2, 
    0xa534, 0x9c4f, 0xa491, 0xacd2, 0xacf2, 0xacf2, 0xacf2, 0xacf2, 0xacf2, 0xacd2, 0xacf2, 0xacf2, 0xacd2, 0x7bcc, 0x29c4, 0x2183, 0x2a83, 0x2b03, 0x2ac3, 0x2aa3, 0x2b22, 0x2ac2, 0x22a2, 0x2202, 0x19e2, 0x3c42, 0x2b42, 0x19a2, 0x18c2, 0x18c2, 0x18c2, 0x18c2, 0x18c2, 0x18c2, 0x18e2, 0x21c3, 0x2aa3, 0x2b23, 0x2aa3, 0x2b03, 0x2b23, 0x3363, 0x33a3, 0x3c23, 0x3c43, 0x44a3, 0x4463, 0x3b64, 0x2a04, 0x31e4, 0x730a, 0xa40e, 0xa44f, 0xa44f, 0xa44f, 0xa44f, 0xa42f, 0xa42f, 0xa42f, 0xa42f, 0xa3ee, 0xac4f, 0xb490, 0xa4f3, 
    0xad76, 0x942f, 0xa491, 0xa4b1, 0xacd2, 0xa4f2, 0xa4d2, 0xa4f2, 0xacd2, 0xacd2, 0xacd2, 0xacd2, 0xa4b1, 0x8c2e, 0x3244, 0x21a3, 0x2203, 0x2aa3, 0x2b23, 0x2b43, 0x2ae3, 0x2b22, 0x2b22, 0x2262, 0x2ae2, 0x44c2, 0x2b42, 0x19a2, 0x18c2, 0x18a2, 0x18a2, 0x18c2, 0x18c2, 0x18c2, 0x1902, 0x2202, 0x2b02, 0x33a2, 0x3362, 0x3363, 0x2a83, 0x2aa3, 0x3343, 0x3383, 0x4463, 0x4ce3, 0x4483, 0x3303, 0x2a04, 0x31e4, 0x8bcd, 0x9c2f, 0x9c4f, 0x9c2f, 0x9c2f, 0x9c2e, 0x9c2e, 0x9c0e, 0x9c2f, 0xa40f, 0xa40e, 0xa44f, 0xac70, 0xa534, 
    0xad96, 0x9450, 0x9c70, 0xa491, 0xa4d2, 0xa4d2, 0xa4d2, 0xa4d1, 0xa4d1, 0xa4b1, 0xa491, 0xa4b1, 0xa4b1, 0xa490, 0x4ae6, 0x21a3, 0x21a3, 0x2ac3, 0x2b03, 0x2ae3, 0x2b43, 0x2ae2, 0x2222, 0x2262, 0x33a2, 0x3c42, 0x2ac2, 0x19c2, 0x18c2, 0x18a2, 0x18a2, 0x18a2, 0x18c2, 0x18c2, 0x2162, 0x2a82, 0x2ac2, 0x3342, 0x3382, 0x3363, 0x3343, 0x2b03, 0x2aa3, 0x2b03, 0x3be3, 0x4483, 0x4423, 0x2a83, 0x3224, 0x4a66, 0x93ee, 0x9c0e, 0x9c2f, 0x9c2f, 0x9c0f, 0x9c2f, 0x9c0e, 0x9c0e, 0x9c0f, 0x9bce, 0xa40e, 0xa42f, 0x9c2f, 0xad96, 
    0xadb7, 0x9cb2, 0x9c50, 0xa491, 0xa4b1, 0xa4d1, 0xa4b1, 0xa4d1, 0xa4d1, 0xa4d1, 0xa491, 0xa4b1, 0xa4b1, 0xa491, 0x73ca, 0x2a04, 0x2183, 0x2223, 0x2b23, 0x2b43, 0x2ac3, 0x2242, 0x22a2, 0x22c2, 0x33e2, 0x3c02, 0x2b62, 0x2202, 0x18e2, 0x18a2, 0x18a2, 0x18a2, 0x18a2, 0x18c2, 0x1982, 0x2222, 0x2aa2, 0x2ae2, 0x33c2, 0x33a2, 0x33e2, 0x2ae2, 0x2223, 0x2243, 0x3383, 0x3be3, 0x3ba3, 0x2a43, 0x3204, 0x6b2a, 0x9bee, 0x9c0f, 0x9c0f, 0x9c2f, 0x9c0e, 0x9c0e, 0x93ee, 0x9bee, 0x9bce, 0x9b8d, 0x9c0e, 0x9c2f, 0x9c71, 0xad96, 
    0xadb7, 0xa514, 0x9430, 0x9c70, 0xa491, 0xa491, 0xa4b1, 0xa4b1, 0xa4b1, 0xa4d1, 0xa4b1, 0xa4b1, 0xa4b1, 0xa491, 0x946f, 0x3ac5, 0x21a3, 0x21e3, 0x2ac3, 0x2263, 0x2223, 0x2ae2, 0x2b02, 0x22a2, 0x2b62, 0x3c02, 0x33e2, 0x2ac2, 0x1922, 0x18a2, 0x18a2, 0x18a2, 0x18a2, 0x18e2, 0x21e2, 0x2b22, 0x2b22, 0x3382, 0x3382, 0x33a2, 0x33a2, 0x3362, 0x2223, 0x2aa3, 0x33a3, 0x3c03, 0x3323, 0x2a23, 0x4265, 0x8b8c, 0x93ee, 0x940e, 0x940e, 0x940e, 0x93ee, 0x93ee, 0x93ee, 0x93ad, 0x938c, 0x93ed, 0x9c0e, 0x9c2f, 0xa4f3, 0xadb6, 
    0xb5b7, 0xad96, 0x9430, 0x9c50, 0x9c91, 0xa491, 0xa4b1, 0x9cb1, 0xa4d1, 0xa4b1, 0xa4d1, 0xa4b1, 0xa4b1, 0xa491, 0xa4b1, 0x6bca, 0x2a24, 0x2183, 0x21a3, 0x21c3, 0x2aa3, 0x2b23, 0x3362, 0x2ae2, 0x2b42, 0x44a2, 0x3c82, 0x2b02, 0x1942, 0x18c2, 0x18a2, 0x18a2, 0x18c2, 0x1942, 0x2ae2, 0x3c42, 0x3362, 0x33c2, 0x33e2, 0x33a2, 0x33a2, 0x2b22, 0x2aa2, 0x3363, 0x3c23, 0x3be3, 0x2a63, 0x3224, 0x6309, 0x8bad, 0x93ad, 0x93ce, 0x93ee, 0x93ee, 0x93ee, 0x93ee, 0x93ad, 0x93cd, 0x93ad, 0x93ee, 0x93ee, 0x9c2f, 0xa555, 0xadb7, 
    0xb5b7, 0xadb7, 0x9cb2, 0x942f, 0x9c70, 0x9c90, 0x9c91, 0x9cb1, 0xa4d1, 0xa4b1, 0xa4b1, 0xa4b1, 0xa491, 0xa491, 0xa4b1, 0x9490, 0x4b26, 0x21c3, 0x2163, 0x21e3, 0x2b23, 0x33e3, 0x33e2, 0x3382, 0x3c42, 0x4d62, 0x4d22, 0x3c22, 0x2202, 0x18c2, 0x18a2, 0x18a2, 0x18c2, 0x19a2, 0x2ae2, 0x3362, 0x3402, 0x3c22, 0x3c42, 0x33e2, 0x3382, 0x2282, 0x2242, 0x2b03, 0x3343, 0x32c3, 0x2a23, 0x4ac6, 0x8bac, 0x8bad, 0x938d, 0x8bad, 0x8bcd, 0x8bcd, 0x93cd, 0x8bad, 0x93cd, 0x8bad, 0x93cd, 0x93ce, 0x93ee, 0x9c71, 0xad96, 0xadb7, 
    0xb5b7, 0xb5b7, 0xa534, 0x942f, 0x9c50, 0x9c70, 0x9c91, 0x9cb1, 0x9cb1, 0x9cb1, 0xa4b1, 0x9cb1, 0x9c91, 0x9c91, 0xa4b1, 0x9c91, 0x7c2c, 0x3ac4, 0x21a3, 0x21a3, 0x2283, 0x2b43, 0x3362, 0x2b02, 0x4502, 0x4d62, 0x4d02, 0x3402, 0x2262, 0x18e2, 0x18a2, 0x18a2, 0x18c2, 0x1962, 0x22a2, 0x2b02, 0x3c62, 0x3c42, 0x3c22, 0x33c2, 0x3362, 0x2ae2, 0x2242, 0x2aa3, 0x2a63, 0x29e3, 0x4265, 0x7b6b, 0x83ad, 0x8b8d, 0x8b6c, 0x8b6c, 0x8b6c, 0x8b8d, 0x8bad, 0x8bad, 0x8bad, 0x8bcd, 0x8bcd, 0x93cd, 0x9c0e, 0xa513, 0xadb7, 0xadb7, 
    0xb5b7, 0xb5b7, 0xad96, 0x9471, 0x942f, 0x9c50, 0x9c70, 0x9c91, 0x9c91, 0x9cb1, 0x9cb1, 0x9c91, 0x9c90, 0x9c70, 0x9c90, 0x9c70, 0x9c70, 0x6bca, 0x3284, 0x21a3, 0x21a3, 0x21e3, 0x2282, 0x2282, 0x4482, 0x4d22, 0x44a2, 0x2b42, 0x19e2, 0x1902, 0x18a2, 0x18a2, 0x1922, 0x2aa2, 0x2b02, 0x33e2, 0x4502, 0x44a2, 0x33c2, 0x3382, 0x2ac2, 0x2ac2, 0x2a82, 0x2a83, 0x2a03, 0x3a65, 0x736a, 0x834b, 0x834c, 0x834c, 0x836c, 0x834c, 0x836c, 0x8b8d, 0x8bad, 0x8bad, 0x8bad, 0x8bad, 0x8bcd, 0x93cd, 0x9c50, 0xad96, 0xadb7, 0xadb7, 
    0xb5b7, 0xb5b7, 0xadb7, 0xa514, 0x942f, 0x9450, 0x9c50, 0x9c91, 0x9c70, 0x9c91, 0x9c91, 0x9c91, 0x9c91, 0x9c90, 0x9c70, 0x9c70, 0x9c50, 0x944f, 0x6bc8, 0x3ac4, 0x21e3, 0x2183, 0x21c2, 0x2242, 0x3382, 0x3c82, 0x33c2, 0x2ac2, 0x2282, 0x21c2, 0x18c2, 0x18c2, 0x1942, 0x2b22, 0x44c2, 0x4d22, 0x4d22, 0x44c2, 0x33a2, 0x2ac2, 0x2222, 0x2a62, 0x2a63, 0x3243, 0x4265, 0x73ab, 0x838c, 0x836c, 0x836c, 0x834b, 0x834c, 0x836c, 0x838c, 0x838d, 0x83ad, 0x8b8d, 0x8bad, 0x8bad, 0x8bad, 0x93ee, 0xa4d3, 0xad96, 0xadb7, 0xadb7, 
    0xb5b7, 0xb5b7, 0xb5b7, 0xad96, 0x9c71, 0x942f, 0x942f, 0x9c70, 0x9c70, 0x9450, 0x9c90, 0x9c90, 0x9c90, 0x9c90, 0x9c70, 0x9c70, 0x9c70, 0x944f, 0x942f, 0x6bc9, 0x4304, 0x2a03, 0x21a2, 0x21c2, 0x2262, 0x3362, 0x2b22, 0x2b02, 0x22a2, 0x2ae2, 0x1922, 0x18c2, 0x21e2, 0x33c2, 0x3382, 0x2b62, 0x3382, 0x3362, 0x2282, 0x21c2, 0x21e2, 0x3243, 0x3a64, 0x4ae6, 0x73cb, 0x83ad, 0x83ad, 0x838d, 0x7b8c, 0x7b6c, 0x836c, 0x834c, 0x836c, 0x838d, 0x838c, 0x838c, 0x83ad, 0x838d, 0x8bad, 0x942f, 0xad76, 0xadb7, 0xadb7, 0xadb7, 
    0xadb7, 0xadb7, 0xadb7, 0xadb7, 0xa534, 0x9430, 0x942f, 0x9450, 0x9c70, 0x9470, 0x9470, 0x9c70, 0x9c70, 0x9470, 0x9470, 0x9450, 0x9450, 0x944f, 0x944f, 0x8c2e, 0x6bc9, 0x42e5, 0x2a23, 0x21e3, 0x21a2, 0x21e2, 0x2282, 0x22a2, 0x2242, 0x3362, 0x1982, 0x1922, 0x2ae2, 0x2b22, 0x2242, 0x2262, 0x2282, 0x2282, 0x21c2, 0x2162, 0x2183, 0x4285, 0x6368, 0x7c0c, 0x7bcd, 0x83cd, 0x83cd, 0x83ad, 0x7b8d, 0x7b8c, 0x836c, 0x834c, 0x838c, 0x838d, 0x838c, 0x838d, 0x838d, 0x8bad, 0x8bee, 0xa4f3, 0xad96, 0xadb7, 0xadb7, 0xadb7, 
    0xadb7, 0xadb6, 0xadb6, 0xad96, 0xad96, 0x9c91, 0x942f, 0x9430, 0x9450, 0x9450, 0x9470, 0x9470, 0x9470, 0x9470, 0x9470, 0x9470, 0x944f, 0x942f, 0x942f, 0x942f, 0x940f, 0x7bcb, 0x5367, 0x3ac4, 0x2a23, 0x21c2, 0x19a2, 0x21e2, 0x2262, 0x3be2, 0x2ac2, 0x21c2, 0x2ac2, 0x2222, 0x19c2, 0x21e2, 0x21c2, 0x21c3, 0x2183, 0x29a3, 0x3a25, 0x7c0b, 0x840d, 0x7bad, 0x83ad, 0x83ad, 0x83ad, 0x7b8d, 0x7b8d, 0x7b8d, 0x7b6c, 0x836c, 0x836c, 0x836c, 0x838c, 0x838d, 0x838d, 0x8bad, 0x9450, 0xad96, 0xad96, 0xad96, 0xad96, 0xad96, 
    0xad96, 0xad96, 0xad96, 0xad96, 0xad96, 0xad75, 0x9430, 0x940f, 0x9430, 0x9450, 0x9450, 0x9450, 0x9470, 0x9450, 0x9450, 0x944f, 0x942f, 0x942f, 0x942f, 0x940f, 0x8c0e, 0x8bee, 0x8c0e, 0x73aa, 0x4b06, 0x3aa4, 0x2a43, 0x21e3, 0x3323, 0x4442, 0x3342, 0x2a62, 0x32e2, 0x1982, 0x21a2, 0x21c3, 0x29c3, 0x3a45, 0x52e7, 0x6baa, 0x7bec, 0x83cd, 0x7bad, 0x7bad, 0x83ad, 0x83ad, 0x7b8d, 0x7b8d, 0x7b8d, 0x7b6c, 0x7b6c, 0x834c, 0x834c, 0x836c, 0x836c, 0x838c, 0x838d, 0x8bee, 0xa534, 0xad96, 0xad96, 0xad96, 0xad96, 0xad96, 
    0xad96, 0xad96, 0xad96, 0xad96, 0xad96, 0xad96, 0xa514, 0x940f, 0x940f, 0x942f, 0x9450, 0x9450, 0x9450, 0x9450, 0x9450, 0x942f, 0x8c2f, 0x942f, 0x8c2f, 0x8c0f, 0x8bee, 0x8c0f, 0x8c0e, 0x8c0e, 0x8bee, 0x73ab, 0x5b48, 0x42c5, 0x4324, 0x4344, 0x3283, 0x3b04, 0x4304, 0x3a84, 0x42c5, 0x5327, 0x6ba9, 0x7c0c, 0x840d, 0x83ce, 0x83ce, 0x83ce, 0x83ad, 0x7bad, 0x7b8d, 0x7b8c, 0x7b8c, 0x7b8c, 0x7b8c, 0x7b6c, 0x7b6c, 0x7b4c, 0x7b6c, 0x836c, 0x836c, 0x836c, 0x8bcd, 0x9cd2, 0xad96, 0xad96, 0xad96, 0xad96, 0xad96, 0xad96, 
    0xad96, 0xad96, 0xad96, 0xad96, 0xad96, 0xad96, 0xad96, 0x9cd2, 0x8c0f, 0x942f, 0x8c0f, 0x942f, 0x942f, 0x8c2f, 0x8c2f, 0x8c2f, 0x8c0f, 0x8c2f, 0x8c2f, 0x8c0f, 0x8c0e, 0x8c0e, 0x8c0e, 0x8bee, 0x8bee, 0x8bee, 0x8bee, 0x83cd, 0x7bcc, 0x738b, 0x6b6a, 0x6b69, 0x6b8a, 0x73ab, 0x7b6b, 0x838c, 0x83ce, 0x83ad, 0x83cd, 0x83ad, 0x83ad, 0x83ce, 0x83cd, 0x7bad, 0x7b6c, 0x7b6c, 0x7b6c, 0x7b6c, 0x7b8c, 0x7b6c, 0x7b6c, 0x7b6c, 0x7b6c, 0x7b6c, 0x838c, 0x83ad, 0x9450, 0xad76, 0xad96, 0xad96, 0xad96, 0xad96, 0xad96, 0xad96, 
    0xad96, 0xad96, 0xad96, 0xad96, 0xad96, 0xad96, 0xad76, 0xad76, 0x9c91, 0x8c0f, 0x8c0f, 0x8c0f, 0x8c0f, 0x8c0f, 0x8c2f, 0x8c2f, 0x8c0f, 0x8c0e, 0x8c0e, 0x8bee, 0x8bee, 0x8c0e, 0x8bee, 0x8bee, 0x8bee, 0x8bee, 0x8bee, 0x8bee, 0x8bee, 0x8bce, 0x83ce, 0x83ae, 0x83ad, 0x838d, 0x7b2b, 0x834c, 0x83ad, 0x83ad, 0x838d, 0x83ad, 0x838d, 0x838c, 0x838d, 0x838c, 0x7b6c, 0x7b4c, 0x734b, 0x734b, 0x7b6c, 0x7b6c, 0x7b8c, 0x7b6c, 0x7b6c, 0x83ac, 0x83ad, 0x8c0f, 0xa555, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad96, 
    0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad75, 0x9c91, 0x8c0f, 0x8c0f, 0x8bef, 0x8bee, 0x8c0f, 0x8c0e, 0x8c0f, 0x8bee, 0x83ee, 0x83ee, 0x8bee, 0x83ee, 0x83ee, 0x83ce, 0x83ee, 0x8bee, 0x8bee, 0x8bee, 0x83ee, 0x83ce, 0x83ad, 0x83ad, 0x83ad, 0x7b8d, 0x7b2b, 0x7aeb, 0x830b, 0x7b6c, 0x838d, 0x83cd, 0x83ad, 0x7b8d, 0x7b8c, 0x7b6c, 0x7b6c, 0x734b, 0x734b, 0x734b, 0x736b, 0x7b6c, 0x7b6c, 0x7b8c, 0x83ac, 0x83ad, 0x8c0f, 0xa555, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 
    0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad75, 0x9c91, 0x8bef, 0x8bef, 0x8bee, 0x83ce, 0x8bee, 0x8bee, 0x83ee, 0x83ee, 0x83ce, 0x83ce, 0x83ce, 0x83ce, 0x83ad, 0x83cd, 0x83ce, 0x83ce, 0x83cd, 0x83cd, 0x83ad, 0x7bad, 0x7bad, 0x7bad, 0x7b6c, 0x7b2b, 0x7aca, 0x7aaa, 0x7b4c, 0x836c, 0x838d, 0x7b8d, 0x7b8c, 0x7b8c, 0x7b6c, 0x7b6c, 0x734c, 0x734b, 0x734b, 0x7b6c, 0x7b6c, 0x7b6c, 0x7b8c, 0x83ad, 0x8c0f, 0xa535, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 
    0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad55, 0x9c91, 0x8bee, 0x8bee, 0x8bee, 0x83ee, 0x83ee, 0x83ce, 0x83ce, 0x83ee, 0x83ce, 0x83ce, 0x83ce, 0x83ad, 0x83ad, 0x83ad, 0x83cd, 0x83ad, 0x838d, 0x838d, 0x7b6c, 0x7b6c, 0x7b6c, 0x7b2b, 0x7b0b, 0x72ca, 0x72aa, 0x7b2b, 0x7b6c, 0x7b6c, 0x7b6c, 0x7b6c, 0x736c, 0x736c, 0x734c, 0x734b, 0x734b, 0x734c, 0x7b6b, 0x7b6c, 0x7b8c, 0x83ad, 0x9430, 0xa535, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 
    0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad75, 0x9cd2, 0x8bef, 0x8bce, 0x83ee, 0x83ee, 0x83ce, 0x83ce, 0x83ce, 0x83ce, 0x83ce, 0x83ad, 0x838d, 0x7b6c, 0x7b8d, 0x83ad, 0x7b8d, 0x7b8c, 0x7b8c, 0x7b6c, 0x7b6c, 0x734b, 0x732b, 0x732b, 0x72ea, 0x72ca, 0x732b, 0x7b4c, 0x734c, 0x734c, 0x734c, 0x734b, 0x734b, 0x732b, 0x732b, 0x734b, 0x734b, 0x7b6c, 0x7b8c, 0x83ad, 0x9471, 0xa555, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 
    0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xa534, 0x9430, 0x83ce, 0x83ce, 0x83ce, 0x83ad, 0x83ce, 0x83ad, 0x7bad, 0x7bad, 0x7b8d, 0x7b8d, 0x7b8c, 0x7b8d, 0x7b8c, 0x7b8c, 0x7b6c, 0x7b6c, 0x734c, 0x732b, 0x732b, 0x72eb, 0x72aa, 0x6aca, 0x730b, 0x730b, 0x732b, 0x732b, 0x732b, 0x732b, 0x732b, 0x730b, 0x730b, 0x732b, 0x7b6c, 0x7b8c, 0x8bee, 0x9cd3, 0xad75, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 
    0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad55, 0x9cb2, 0x8bee, 0x83ad, 0x838d, 0x83ad, 0x83ad, 0x83ad, 0x7bad, 0x7b8d, 0x7b8c, 0x7b6c, 0x7b4c, 0x7b4c, 0x7b6c, 0x736c, 0x734c, 0x732b, 0x72eb, 0x72ca, 0x72ca, 0x730b, 0x730b, 0x730b, 0x72ea, 0x730b, 0x732b, 0x732b, 0x732b, 0x734b, 0x732b, 0x7b2b, 0x836c, 0x8bcd, 0x9450, 0xa535, 0xad75, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 
    0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xa534, 0x9471, 0x8bee, 0x83ad, 0x838d, 0x7b6c, 0x7b6c, 0x7b6c, 0x7b6c, 0x7b4c, 0x732b, 0x7b2c, 0x732b, 0x72eb, 0x72eb, 0x72ea, 0x72ca, 0x6aea, 0x6b0b, 0x6b0b, 0x6b0b, 0x730b, 0x730b, 0x730b, 0x732b, 0x734b, 0x734b, 0x7b4c, 0x836c, 0x8bad, 0x9c50, 0xa514, 0xad75, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 
    0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad75, 0xa534, 0x9cb2, 0x942f, 0x8bce, 0x7b6d, 0x7b4c, 0x734c, 0x732b, 0x730b, 0x72ea, 0x72ea, 0x72eb, 0x730b, 0x732b, 0x730b, 0x730b, 0x732b, 0x732b, 0x732b, 0x732b, 0x732b, 0x732b, 0x734b, 0x7b4c, 0x838d, 0x8bce, 0x9c70, 0xa514, 0xad75, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 
    0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad55, 0xa513, 0x9c91, 0x942f, 0x83ce, 0x7b8d, 0x7b6c, 0x7b4c, 0x732b, 0x732b, 0x732b, 0x734c, 0x732c, 0x734c, 0x734c, 0x734c, 0x734c, 0x7b4c, 0x7b6c, 0x838d, 0x8bce, 0x942f, 0x9cb2, 0xa534, 0xad75, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 
    0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad75, 0xad55, 0xa534, 0xa4d2, 0x9c91, 0x9450, 0x8c0f, 0x8bee, 0x8bee, 0x83ce, 0x83ce, 0x83ce, 0x83ce, 0x8bee, 0x8c0f, 0x9450, 0x9c91, 0xa4f3, 0xa535, 0xad75, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76
};
const tImage eye01 = { image_data_eye01, 64, 64,
    4096, 16, false, 0x0000 };
