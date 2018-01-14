
/*******************************************************************************
* image
* filename: unsaved
* name: dragoneye 009
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



static const uint16_t image_data_dragoneye010[4096] PROGMEM = {
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa534, 0x9cd3, 0x9cb2, 0xacf3, 0xbd55, 0xcdd6, 0xd658, 0xe6ba, 0xe6da, 0xeefb, 0xe6fb, 0xe6da, 0xde9a, 0xce59, 0xc5f7, 0xb596, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0x9cf3, 0x8c51, 0x7bce, 0x940f, 0xbd54, 0xde58, 0xeeda, 0xeeda, 0xeeda, 0xeeda, 0xeeda, 0xeefb, 0xeefb, 0xeefb, 0xeefb, 0xeefb, 0xef1b, 0xef3b, 0xef3b, 0xe6fa, 0xce59, 0xb5d7, 0xad76, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa535, 0x8c71, 0x7bae, 0x6b4c, 0x838d, 0xbd34, 0xe679, 0xeeda, 0xeefb, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xeefb, 0xef1b, 0xef1b, 0xef1c, 0xef1b, 0xef1b, 0xeefb, 0xeefb, 0xef1b, 0xef3b, 0xef3b, 0xe6fb, 0xc638, 0xad76, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa535, 0x8c51, 0x736d, 0x630b, 0x6b0b, 0x9c50, 0xcd75, 0xe699, 0xeefb, 0xeefb, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xeefb, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xeeda, 0xeeda, 0xef3b, 0xef3c, 0xef3c, 0xef3c, 0xef1b, 0xce59, 0xad76, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0x9492, 0x736c, 0x62ea, 0x5aaa, 0x734c, 0xbd13, 0xd5b6, 0xe699, 0xe6da, 0xeefb, 0xeefb, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xeefa, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xeeda, 0xeefa, 0xef1b, 0xef3c, 0xef3c, 0xef3c, 0xef3c, 0xef3c, 0xe71b, 0xc618, 0xad76, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0x9d14, 0x7bae, 0x62ea, 0x5289, 0x5269, 0x83ce, 0xc554, 0xd5f7, 0xde79, 0xe6da, 0xe6fb, 0xeefb, 0xeefb, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xeefb, 0xeeda, 0xeefa, 0xef1b, 0xef1b, 0xeefb, 0xeeda, 0xeefa, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef3b, 0xef3c, 0xef3b, 0xdeba, 0xb596, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0x94b2, 0x6b2c, 0x5aa9, 0x4a48, 0x4a48, 0x8bce, 0xcd75, 0xd617, 0xde79, 0xe6ba, 0xe6da, 0xe6fb, 0xe6fb, 0xeefb, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xeefb, 0xe6da, 0xeeda, 0xeeda, 0xeefb, 0xe6da, 0xeeda, 0xeefb, 0xef1b, 0xef1b, 0xeefb, 0xeefb, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xef1b, 0xe6fb, 0xbdf7, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0x8430, 0x62ea, 0x5269, 0x4a28, 0x4a07, 0x83ae, 0xcd75, 0xd637, 0xde79, 0xde99, 0xe6ba, 0xe6da, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe71b, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fa, 0xe6da, 0xe6da, 0xe6ba, 0xe6da, 0xe6da, 0xe6fa, 0xeefa, 0xe6da, 0xe6da, 0xeeda, 0xeeda, 0xeeda, 0xeeda, 0xeeda, 0xeeda, 0xeefa, 0xeefa, 0xeefa, 0xce38, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa535, 0x7bef, 0x5aaa, 0x4a48, 0x4207, 0x41e7, 0x7b6d, 0xc534, 0xd617, 0xde78, 0xde99, 0xde99, 0xe6da, 0xe6da, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6da, 0xe6da, 0xe6ba, 0xe6da, 0xe6ba, 0xe6ba, 0xe6da, 0xe6ba, 0xe699, 0xe6da, 0xeefa, 0xe6fa, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xeefa, 0xeefb, 0xeefb, 0xeefa, 0xd659, 0xad76, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa535, 0x7bcf, 0x5a89, 0x4a28, 0x41e7, 0x39c6, 0x62ca, 0xbcf3, 0xd5d6, 0xde58, 0xde99, 0xde99, 0xe6ba, 0xe6ba, 0xe6da, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fb, 0xe6fa, 0xe6fa, 0xe6fa, 0xe6fb, 0xe6da, 0xe6da, 0xe6ba, 0xe6da, 0xe6ba, 0xe6b9, 0xe699, 0xe699, 0xe679, 0xe6ba, 0xe6ba, 0xe6da, 0xe6da, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6da, 0xe6da, 0xe6fa, 0xe6fa, 0xeeda, 0xd658, 0xad75, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0x7bef, 0x5a89, 0x4207, 0x39c6, 0x39a6, 0x4a28, 0xa470, 0xcdb6, 0xd637, 0xde79, 0xdeba, 0xdeba, 0xe6ba, 0xe6ba, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6ba, 0xe6ba, 0xe6b9, 0xe699, 0xe699, 0xe6ba, 0xe6da, 0xe6b9, 0xe6ba, 0xe6da, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6b9, 0xe6b9, 0xe6b9, 0xe6ba, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xce38, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0x8451, 0x5aaa, 0x4207, 0x39c6, 0x3186, 0x39a6, 0x83ce, 0xc514, 0xd596, 0xd658, 0xdeba, 0xdeda, 0xdeba, 0xe6ba, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6b9, 0xe699, 0xe6ba, 0xe6da, 0xe6da, 0xe6ba, 0xe6b9, 0xe6b9, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6ba, 0xe699, 0xe699, 0xe6b9, 0xe6ba, 0xe6ba, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xc5f7, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0x94b2, 0x5aca, 0x4a28, 0x39c6, 0x3185, 0x3185, 0x5aaa, 0xb4b2, 0xcd14, 0xd5f7, 0xd679, 0xdeba, 0xdeda, 0xdeba, 0xe6ba, 0xe6ba, 0xe6da, 0xe6da, 0xe6da, 0xe6da, 0xdeba, 0xe6ba, 0xe6da, 0xe6ba, 0xe6ba, 0xe6ba, 0xe699, 0xde99, 0xde99, 0xde99, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6ba, 0xe6ba, 0xe699, 0xe699, 0xe699, 0xe699, 0xde99, 0xde99, 0xde79, 0xe699, 0xe699, 0xe6b9, 0xe6b9, 0xe6b9, 0xe6ba, 0xe6b9, 0xe6b9, 0xe6b9, 0xb5b6, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0x9d14, 0x630c, 0x4a28, 0x39c6, 0x3185, 0x3165, 0x39e7, 0x940f, 0xc513, 0xcd95, 0xd638, 0xde99, 0xdeba, 0xdeda, 0xdeda, 0xde99, 0xde99, 0xe6b9, 0xdeb9, 0xdeba, 0xdeba, 0xdeba, 0xdeba, 0xdeba, 0xdeba, 0xdeb9, 0xdeb9, 0xdeba, 0xdeba, 0xde9a, 0xdeba, 0xdeba, 0xdeba, 0xdeba, 0xde99, 0xde79, 0xd617, 0xcdd6, 0xbd74, 0xb512, 0xad12, 0xad12, 0xb532, 0xc5b5, 0xd617, 0xde78, 0xde99, 0xde99, 0xe699, 0xe6b9, 0xe6b9, 0xe6b9, 0xde79, 0xad76, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0x7bae, 0x5269, 0x39c6, 0x3185, 0x3165, 0x3165, 0x62ca, 0xbcf3, 0xcd54, 0xd5f7, 0xd679, 0xdeb9, 0xdeba, 0xdeba, 0xde99, 0xde99, 0xde99, 0xde99, 0xde99, 0xdeb9, 0xdeb9, 0xdeb9, 0xdeb9, 0xde99, 0xde99, 0xdeb9, 0xdeb9, 0xde99, 0xde99, 0xde79, 0xde99, 0xdeba, 0xdeba, 0xde99, 0xd638, 0xb532, 0x942d, 0x6b08, 0x6b48, 0x6328, 0x5ac7, 0x6b48, 0x6b68, 0x7be9, 0x8c4b, 0xa4ce, 0xbd94, 0xd658, 0xde99, 0xde99, 0xde99, 0xde99, 0xde99, 0xce18, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0x9492, 0x5aaa, 0x41e7, 0x3186, 0x3165, 0x2965, 0x39a6, 0x8bef, 0xc533, 0xcd75, 0xce17, 0xd699, 0xde99, 0xdeba, 0xde79, 0xde38, 0xde58, 0xde78, 0xde78, 0xde58, 0xde78, 0xde99, 0xde99, 0xde99, 0xde99, 0xde99, 0xde99, 0xde99, 0xde99, 0xde79, 0xde59, 0xde99, 0xde99, 0xd658, 0xb553, 0x7bab, 0x52a7, 0x5286, 0x4a86, 0x4246, 0x4a66, 0x4246, 0x4a66, 0x5307, 0x6367, 0x6367, 0x73a8, 0x83e9, 0x946d, 0xc5d5, 0xde78, 0xde78, 0xde78, 0xde78, 0xde99, 0xbdb6, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa535, 0x6b2c, 0x4a28, 0x39a6, 0x3165, 0x2945, 0x2945, 0x5269, 0xb4f2, 0xc534, 0xcd75, 0xd658, 0xd699, 0xde99, 0xde99, 0xd658, 0xde79, 0xde79, 0xde78, 0xde78, 0xde58, 0xd658, 0xd638, 0xde79, 0xde79, 0xde58, 0xde79, 0xde99, 0xde99, 0xde79, 0xde59, 0xde79, 0xde79, 0xcdf7, 0x83cd, 0x4a47, 0x4206, 0x39e5, 0x31c5, 0x31e5, 0x3a05, 0x3a45, 0x3a25, 0x3a26, 0x4266, 0x4286, 0x4266, 0x4a87, 0x52c7, 0x6b48, 0x73aa, 0xa4f0, 0xd637, 0xde78, 0xde78, 0xde98, 0xde78, 0xad75, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0x8c51, 0x5289, 0x39c6, 0x3185, 0x2945, 0x2945, 0x3165, 0x736c, 0xbd54, 0xc595, 0xce17, 0xd679, 0xd679, 0xd699, 0xd679, 0xde78, 0xd658, 0xde58, 0xd658, 0xd658, 0xde58, 0xd658, 0xd638, 0xd637, 0xde58, 0xde58, 0xd658, 0xde78, 0xde79, 0xd658, 0xde79, 0xd679, 0xc5b6, 0x6b2b, 0x4206, 0x31c5, 0x31c5, 0x31e5, 0x3225, 0x3aa5, 0x3b05, 0x3b45, 0x3b05, 0x3a65, 0x3a86, 0x42e6, 0x4306, 0x42e6, 0x4ae7, 0x4aa7, 0x52c8, 0x6b49, 0x9caf, 0xd617, 0xde58, 0xde78, 0xde98, 0xbdd7, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa535, 0x6b2c, 0x4a28, 0x39a6, 0x3165, 0x2944, 0x2944, 0x41e7, 0x942f, 0xc574, 0xcdb5, 0xce37, 0xd679, 0xd699, 0xd699, 0xd638, 0xd658, 0xd658, 0xd658, 0xd658, 0xd658, 0xd658, 0xd658, 0xd638, 0xd637, 0xd617, 0xd638, 0xd638, 0xd658, 0xd678, 0xd658, 0xd638, 0xc5b6, 0x6b4b, 0x3a06, 0x31c5, 0x31c4, 0x3204, 0x3264, 0x32c4, 0x3b05, 0x43c5, 0x3b45, 0x3b25, 0x3a25, 0x39c5, 0x3a65, 0x42e6, 0x4326, 0x4ba6, 0x4b47, 0x4ae7, 0x52a8, 0x5ae9, 0x946e, 0xd617, 0xde58, 0xde78, 0xd637, 0xad75, 0xa555, 0xa555, 
    0xa555, 0xa555, 0x8c92, 0x5289, 0x39c7, 0x3165, 0x2945, 0x2944, 0x2944, 0x5269, 0xacd2, 0xc574, 0xc5b5, 0xce17, 0xd658, 0xd679, 0xd658, 0xd637, 0xd638, 0xd658, 0xd638, 0xd638, 0xd658, 0xd638, 0xd638, 0xd617, 0xd637, 0xd617, 0xcdd6, 0xd617, 0xd617, 0xd637, 0xd617, 0xcdd6, 0x738c, 0x4226, 0x3205, 0x31e4, 0x3224, 0x3284, 0x32e4, 0x3b64, 0x3304, 0x3b85, 0x3b85, 0x3b05, 0x3a25, 0x3185, 0x39e5, 0x3aa6, 0x4326, 0x4b66, 0x4b66, 0x4b47, 0x4ae7, 0x52c8, 0x5ac9, 0x9c70, 0xd637, 0xd657, 0xde37, 0xbdb6, 0xa555, 0xa555, 
    0xa556, 0xa555, 0x738d, 0x4a28, 0x39a6, 0x3165, 0x2944, 0x2924, 0x2945, 0x6b0b, 0xb513, 0xc574, 0xc595, 0xcdd6, 0xce17, 0xd658, 0xd617, 0xd637, 0xd617, 0xd637, 0xd637, 0xd637, 0xd637, 0xd637, 0xd617, 0xd617, 0xd637, 0xd617, 0xd617, 0xcdd6, 0xcdf6, 0xd637, 0xcdd6, 0x942f, 0x4206, 0x29a4, 0x29c4, 0x3244, 0x3284, 0x3324, 0x3b64, 0x3ba4, 0x3ba4, 0x3b64, 0x3ba5, 0x3b25, 0x3205, 0x3185, 0x3185, 0x3a65, 0x4346, 0x4b86, 0x4bc6, 0x4b47, 0x4b27, 0x5327, 0x52a8, 0x62ea, 0xbd54, 0xd637, 0xd637, 0xcdf6, 0xa576, 0xa555, 
    0xa576, 0x9d14, 0x5aca, 0x4207, 0x3185, 0x2945, 0x2924, 0x2924, 0x3186, 0x838d, 0xb513, 0xbd74, 0xc595, 0xcdb5, 0xcdd6, 0xce17, 0xcdf7, 0xcdf7, 0xcdf7, 0xcdf7, 0xcdf7, 0xcdf7, 0xce17, 0xce17, 0xcdf7, 0xcdf7, 0xce17, 0xce17, 0xce17, 0xce17, 0xcdf6, 0xcdd6, 0xacf2, 0x4a67, 0x31a4, 0x29a4, 0x2a24, 0x2a64, 0x3304, 0x3be4, 0x3bc4, 0x3b64, 0x3bc4, 0x3b64, 0x3b24, 0x3b44, 0x31e5, 0x3165, 0x3185, 0x39e5, 0x4325, 0x4ba6, 0x4bc6, 0x5406, 0x53a7, 0x5387, 0x5307, 0x52c8, 0x7b8c, 0xce16, 0xd637, 0xd616, 0xad76, 0xa576, 
    0xa576, 0x8c51, 0x5269, 0x39c6, 0x3165, 0x2944, 0x2924, 0x2924, 0x41e7, 0x93ef, 0xb513, 0xbd74, 0xc595, 0xc5b5, 0xcdd6, 0xcdf6, 0xcdf6, 0xcdf6, 0xcdf6, 0xcdf7, 0xcdf6, 0xcdf6, 0xcdf7, 0xcdf7, 0xcdf6, 0xcdf7, 0xcdf7, 0xcdf7, 0xcdf7, 0xce17, 0xcdf6, 0xc575, 0x734b, 0x31c5, 0x2984, 0x29c3, 0x32c3, 0x3383, 0x3ba4, 0x3bc4, 0x3bc4, 0x3b64, 0x3b64, 0x4404, 0x3b44, 0x3b04, 0x31a4, 0x3165, 0x3165, 0x31a5, 0x3aa5, 0x43a6, 0x5486, 0x5d06, 0x5446, 0x5407, 0x5c87, 0x5be8, 0x5ae9, 0xacf2, 0xd616, 0xd616, 0xbdb6, 0xad76, 
    0xa576, 0x738e, 0x4a28, 0x39a6, 0x2965, 0x2924, 0x2924, 0x2924, 0x5248, 0x9c30, 0xb513, 0xbd54, 0xc575, 0xc595, 0xcdd5, 0xcdd6, 0xcdd6, 0xcdd6, 0xcdd6, 0xc5d6, 0xcdd6, 0xcdd6, 0xcdd6, 0xcdd6, 0xcdd6, 0xcdd6, 0xcdd6, 0xcdd6, 0xcdd6, 0xcdf6, 0xcdd6, 0xacb1, 0x4246, 0x2984, 0x21a3, 0x2a23, 0x2ac3, 0x3be3, 0x3c43, 0x3c24, 0x4444, 0x3c24, 0x3ba4, 0x3b64, 0x3324, 0x3224, 0x2964, 0x2944, 0x3165, 0x3165, 0x3a05, 0x4385, 0x5466, 0x54e6, 0x5426, 0x5446, 0x5d07, 0x5c87, 0x5b28, 0x738c, 0xcdf6, 0xce16, 0xc5f6, 0xad76, 
    0xa555, 0x62eb, 0x4207, 0x3185, 0x2945, 0x2924, 0x2924, 0x2924, 0x5a89, 0xa430, 0xb4f2, 0xb513, 0xbd54, 0xc595, 0xc595, 0xc5b5, 0xc5b5, 0xc5b5, 0xc5d6, 0xc5b6, 0xc5b6, 0xcdd6, 0xcdd6, 0xc5b6, 0xc5b5, 0xcdd6, 0xc5d6, 0xcdd6, 0xcdd6, 0xcdd6, 0xc595, 0x7bac, 0x31e5, 0x2183, 0x29e3, 0x2a83, 0x2b03, 0x3303, 0x3363, 0x3be3, 0x44a4, 0x4424, 0x3b84, 0x32c4, 0x3284, 0x29c4, 0x2944, 0x2944, 0x2944, 0x3165, 0x31a5, 0x4305, 0x4be5, 0x54c6, 0x54a6, 0x5ca6, 0x6547, 0x5ca7, 0x5bc8, 0x5b09, 0xb533, 0xcdf6, 0xcdf6, 0xad76, 
    0x9cf3, 0x5aaa, 0x41e7, 0x3185, 0x2944, 0x2124, 0x2124, 0x2944, 0x62ca, 0xa40f, 0xac91, 0xb4d2, 0xb4f3, 0xbd54, 0xc574, 0xc595, 0xc595, 0xc595, 0xc5b5, 0xc5b5, 0xc5b6, 0xc5b5, 0xc5b5, 0xc5b5, 0xc5b5, 0xc5b5, 0xc5b5, 0xc5b5, 0xc5b5, 0xc5b5, 0xb533, 0x52a7, 0x29a4, 0x2183, 0x2a63, 0x3363, 0x3be3, 0x3be3, 0x3383, 0x3ba3, 0x3c43, 0x4444, 0x3b84, 0x32c4, 0x2a44, 0x29e4, 0x2944, 0x2944, 0x2944, 0x3164, 0x3185, 0x3aa5, 0x4c45, 0x4c65, 0x54e6, 0x54a6, 0x5ce7, 0x5427, 0x5c47, 0x5b08, 0x8c2e, 0xcdd5, 0xcdf6, 0xb596, 
    0x8c71, 0x5289, 0x39c6, 0x3165, 0x2944, 0x2124, 0x2124, 0x2965, 0x6aeb, 0xa42f, 0xacb1, 0xb4f2, 0xbd13, 0xbd54, 0xbd94, 0xc595, 0xc595, 0xc575, 0xc595, 0xc575, 0xc595, 0xc575, 0xc575, 0xbd74, 0xbd54, 0xbd54, 0xc574, 0xbd54, 0xc554, 0xc554, 0x9c4f, 0x3a25, 0x2163, 0x2183, 0x2aa3, 0x3383, 0x3c43, 0x33c3, 0x3c03, 0x3c23, 0x3c03, 0x3363, 0x3304, 0x2a64, 0x2a44, 0x29a4, 0x2924, 0x2924, 0x2944, 0x2944, 0x3165, 0x3225, 0x43c5, 0x4c65, 0x54c6, 0x5d06, 0x5cc6, 0x5447, 0x5c67, 0x5b88, 0x73ab, 0xc5b5, 0xcdd5, 0xbdb6, 
    0x8410, 0x5269, 0x39a6, 0x3165, 0x2944, 0x2924, 0x2124, 0x3185, 0x730b, 0xa450, 0xacd1, 0xacf2, 0xb533, 0xbd34, 0xbd54, 0xbd54, 0xbd54, 0xbd74, 0xbd54, 0xbd54, 0xbd54, 0xbd54, 0xbd34, 0xbd74, 0xc574, 0xc575, 0xc595, 0xbd74, 0xbd54, 0xbd34, 0x7bac, 0x31e4, 0x2183, 0x2203, 0x3383, 0x33a3, 0x33a3, 0x33c3, 0x3be3, 0x3c23, 0x3bc3, 0x3343, 0x2ac3, 0x2a24, 0x2a24, 0x2984, 0x2924, 0x2924, 0x2924, 0x2944, 0x2944, 0x31a5, 0x3ae5, 0x4c45, 0x54c5, 0x54e6, 0x5d06, 0x5466, 0x5407, 0x5c28, 0x6349, 0xb512, 0xc594, 0xbdb6, 
    0x7bae, 0x4a48, 0x39a6, 0x2965, 0x2924, 0x2124, 0x2124, 0x31a6, 0x730b, 0xa42f, 0xac91, 0xacd2, 0xb513, 0xbd33, 0xbd33, 0xbd33, 0xbd54, 0xbd54, 0xbd54, 0xbd74, 0xbd74, 0xbd74, 0xbd54, 0xbd54, 0xbd54, 0xbd74, 0xbd74, 0xbd54, 0xbd54, 0xb533, 0x6309, 0x29a4, 0x21a3, 0x2263, 0x3be3, 0x3c23, 0x3383, 0x33c3, 0x3bc3, 0x3be3, 0x3343, 0x2ae3, 0x2a23, 0x29c3, 0x29c4, 0x2144, 0x2124, 0x2924, 0x2924, 0x2924, 0x2944, 0x3184, 0x3ae5, 0x43e5, 0x4c85, 0x4c65, 0x5d26, 0x5ca6, 0x5407, 0x5c47, 0x5b69, 0xa44f, 0xc553, 0xbdb5, 
    0x736d, 0x4a28, 0x39a6, 0x2965, 0x2924, 0x2124, 0x2124, 0x39a6, 0x72cb, 0x9c0f, 0xac91, 0xacd2, 0xb4f2, 0xb513, 0xb513, 0xbd33, 0xbd34, 0xbd54, 0xbd34, 0xbd33, 0xbd53, 0xbd54, 0xbd54, 0xbd54, 0xbd54, 0xbd54, 0xbd54, 0xbd54, 0xbd54, 0xb513, 0x4aa7, 0x2183, 0x21a3, 0x2263, 0x33a3, 0x3c03, 0x33c3, 0x33e3, 0x3c23, 0x3be3, 0x2b03, 0x2aa3, 0x2a23, 0x21c3, 0x2183, 0x2123, 0x2104, 0x2104, 0x2924, 0x2924, 0x2944, 0x2964, 0x3225, 0x3a85, 0x43a5, 0x4c05, 0x4c26, 0x4bc6, 0x4b46, 0x5367, 0x52e8, 0x940e, 0xc512, 0xc574, 
    0x6b4d, 0x4a28, 0x39a6, 0x2965, 0x2924, 0x2124, 0x2124, 0x39a6, 0x72eb, 0x9bef, 0xa450, 0xac91, 0xacd2, 0xb4f2, 0xb4f3, 0xb513, 0xb513, 0xb533, 0xb533, 0xb533, 0xbd54, 0xb554, 0xb554, 0xb554, 0xbd54, 0xb554, 0xbd54, 0xb554, 0xb554, 0xacd2, 0x4246, 0x2183, 0x21a3, 0x21e3, 0x2283, 0x2b23, 0x3383, 0x33c3, 0x3c03, 0x3363, 0x2ac3, 0x2a43, 0x21e3, 0x2203, 0x2163, 0x2123, 0x2103, 0x2103, 0x2104, 0x2924, 0x2924, 0x2964, 0x3204, 0x3265, 0x3b25, 0x4c05, 0x4385, 0x4be6, 0x4b06, 0x4b47, 0x52e8, 0x8bcd, 0xc4d1, 0xc554, 
    0x6b2c, 0x4a28, 0x39a6, 0x2945, 0x2924, 0x2124, 0x2124, 0x39a6, 0x730b, 0x9bce, 0xa3ef, 0xa430, 0xac70, 0xacb2, 0xacb1, 0xb4b2, 0xb4d2, 0xb513, 0xb533, 0xb553, 0xb554, 0xb534, 0xb554, 0xb554, 0xb533, 0xb533, 0xb534, 0xb533, 0xb533, 0x9c90, 0x3a05, 0x2163, 0x1983, 0x2202, 0x2ac2, 0x2aa3, 0x2b23, 0x3363, 0x2b23, 0x2aa3, 0x2aa3, 0x2a43, 0x21c3, 0x21a3, 0x2143, 0x2103, 0x2103, 0x2103, 0x2103, 0x2104, 0x2924, 0x2944, 0x3244, 0x3284, 0x3ae5, 0x43e5, 0x4305, 0x4b86, 0x42a6, 0x53e7, 0x5328, 0x83ac, 0xbcb1, 0xbd13, 
    0x6b2c, 0x4a28, 0x39a6, 0x2965, 0x2924, 0x2124, 0x2104, 0x39a6, 0x72ea, 0x938d, 0x9bee, 0xa40f, 0xac50, 0xac71, 0xacb1, 0xb4f2, 0xb4f3, 0xb4f3, 0xb513, 0xb533, 0xb533, 0xb533, 0xb533, 0xb533, 0xb533, 0xb513, 0xb533, 0xb533, 0xb513, 0x9470, 0x3a45, 0x2183, 0x21a2, 0x2ac2, 0x33c2, 0x3382, 0x2b23, 0x2aa3, 0x2243, 0x2243, 0x2ac3, 0x2a83, 0x2223, 0x2183, 0x2143, 0x2103, 0x2103, 0x2103, 0x2103, 0x2103, 0x2924, 0x2944, 0x3244, 0x32a4, 0x3ae4, 0x4385, 0x4385, 0x4305, 0x4b46, 0x5467, 0x5348, 0x83ac, 0xbcf2, 0xbd54, 
    0x6b4c, 0x4a28, 0x39a6, 0x2965, 0x2924, 0x2124, 0x2104, 0x39a6, 0x6aca, 0x934c, 0x9c0f, 0xa450, 0xac71, 0xac71, 0xacd2, 0xacf2, 0xad13, 0xb513, 0xb513, 0xb4f2, 0xb513, 0xb513, 0xb513, 0xb513, 0xb513, 0xad13, 0xb513, 0xb513, 0xb512, 0x9c70, 0x3a45, 0x21a3, 0x21e2, 0x2ae2, 0x2b22, 0x2ae2, 0x2ae2, 0x2b03, 0x2ae3, 0x2a83, 0x2a83, 0x2ac3, 0x2243, 0x21a3, 0x2163, 0x2103, 0x20e3, 0x20e3, 0x2103, 0x2103, 0x2103, 0x2924, 0x3264, 0x3b84, 0x3b44, 0x3b45, 0x43c5, 0x43c5, 0x4b86, 0x5426, 0x52e7, 0x836c, 0xbd12, 0xbd54, 
    0x736d, 0x4a48, 0x39a6, 0x3165, 0x2924, 0x2124, 0x2104, 0x3185, 0x6aaa, 0x8b2c, 0x9bef, 0xa450, 0xa470, 0xac91, 0xacd2, 0xacf2, 0xacf2, 0xacf2, 0xad12, 0xacf2, 0xacd2, 0xacd2, 0xacf2, 0xacf2, 0xacf2, 0xacf2, 0xacf2, 0xb4f2, 0xb4f2, 0x9c4f, 0x3a65, 0x2183, 0x1962, 0x19c2, 0x2282, 0x2ae2, 0x2b42, 0x3362, 0x2b22, 0x2263, 0x2223, 0x2263, 0x2243, 0x2223, 0x21a3, 0x2103, 0x20e3, 0x20e3, 0x20e3, 0x2103, 0x2103, 0x2124, 0x2a24, 0x3304, 0x3b24, 0x3b44, 0x3b45, 0x4c05, 0x4ba6, 0x5406, 0x52c7, 0x83ac, 0xbd12, 0xbd54, 
    0x7bae, 0x4a48, 0x39c6, 0x3165, 0x2944, 0x2124, 0x2104, 0x3165, 0x6289, 0x8b2c, 0x9bee, 0x9c2f, 0xa470, 0xa490, 0xacd1, 0xacd2, 0xacf2, 0xacf2, 0xacf2, 0xacf2, 0xacf2, 0xacf2, 0xacd1, 0xac91, 0xac91, 0xacb1, 0xacb1, 0xa4b1, 0xa4b1, 0xa470, 0x3a65, 0x2163, 0x1962, 0x19c2, 0x22a2, 0x2b42, 0x2b42, 0x2ae2, 0x2282, 0x2202, 0x2ac3, 0x2ae3, 0x2243, 0x33a3, 0x21e3, 0x1903, 0x18e3, 0x18e3, 0x20e3, 0x20e3, 0x20e3, 0x2123, 0x2a03, 0x3284, 0x3304, 0x3b44, 0x3b45, 0x4385, 0x5486, 0x5466, 0x52c7, 0x93cd, 0xb4f2, 0xb554, 
    0x8410, 0x5269, 0x39c6, 0x3185, 0x2944, 0x2124, 0x2104, 0x2945, 0x62a9, 0x832c, 0x9bee, 0x9c2f, 0xa450, 0xa491, 0xa4b1, 0xacd2, 0xacf2, 0xacf2, 0xacf2, 0xacd2, 0xacf2, 0xacf2, 0xacf2, 0xacd2, 0xacd1, 0xacb1, 0xacf2, 0xacf2, 0xacd2, 0xa4b1, 0x4ae7, 0x2183, 0x1942, 0x2202, 0x2b02, 0x2b22, 0x2ae2, 0x22a2, 0x2ae2, 0x2262, 0x2ac2, 0x2222, 0x2202, 0x3c63, 0x2ac3, 0x2123, 0x18e3, 0x18c3, 0x20e3, 0x20e3, 0x20e3, 0x2163, 0x2a83, 0x3324, 0x3304, 0x3b44, 0x43c4, 0x4c45, 0x54a5, 0x5446, 0x52e7, 0x9c4f, 0xb512, 0xb574, 
    0x8c72, 0x5289, 0x41e7, 0x3185, 0x2944, 0x2924, 0x2104, 0x2944, 0x5a89, 0x832b, 0x93ce, 0x9c0f, 0x9c50, 0xa470, 0xa4b1, 0xa4b1, 0xacd2, 0xacf2, 0xacf2, 0xa4d2, 0xacf2, 0xacf2, 0xacf2, 0xacf2, 0xacd1, 0xacd2, 0xacf2, 0xacd2, 0xacd1, 0xa4b1, 0x6349, 0x21a3, 0x1942, 0x19e2, 0x22a2, 0x22a2, 0x2ac2, 0x2b02, 0x2b22, 0x2b02, 0x2282, 0x2202, 0x2b02, 0x3c62, 0x2ac2, 0x1942, 0x18c3, 0x18c3, 0x18e3, 0x18e3, 0x20e3, 0x21a3, 0x32e3, 0x3ba3, 0x3b84, 0x32c4, 0x3b24, 0x43c5, 0x54e5, 0x5406, 0x5ae8, 0xac90, 0xb512, 0xb575, 
    0x9cf4, 0x5aaa, 0x4207, 0x39a6, 0x2945, 0x2924, 0x2124, 0x2124, 0x5269, 0x832b, 0x8bad, 0x93ef, 0x9c30, 0xa470, 0xa491, 0xa4b1, 0xa4b1, 0xa4d2, 0xa4d2, 0xa4d1, 0xa4b1, 0xa4d2, 0xa4f2, 0xacd1, 0xacb1, 0xacd2, 0xacd2, 0xa4b1, 0xa4b1, 0xa491, 0x7bcb, 0x2a23, 0x1982, 0x1982, 0x2262, 0x2b02, 0x2b62, 0x2ae2, 0x2b42, 0x2b02, 0x2ac2, 0x2aa2, 0x3c22, 0x3c02, 0x2262, 0x1942, 0x18c2, 0x18c3, 0x18c3, 0x18e3, 0x2103, 0x2a43, 0x32e3, 0x3b84, 0x3ba4, 0x3b84, 0x3b04, 0x4365, 0x5465, 0x4b66, 0x6b4a, 0xacb1, 0xb512, 0xad75, 
    0xad76, 0x62eb, 0x4a28, 0x39a6, 0x3165, 0x2944, 0x2124, 0x2124, 0x4a28, 0x7b0b, 0x8b8d, 0x93ee, 0x9c2f, 0x9c50, 0x9c70, 0xa491, 0xa4b1, 0xa4b1, 0xa4d1, 0xa4d1, 0xa4d1, 0xa4d1, 0xa4d1, 0xa4b1, 0xa4b1, 0xa491, 0xa491, 0xa4b1, 0xa4b1, 0xa4b1, 0x942e, 0x3284, 0x1982, 0x1962, 0x2222, 0x22c2, 0x2b02, 0x2b22, 0x2b02, 0x2202, 0x2262, 0x2ac2, 0x3c82, 0x33a2, 0x2aa2, 0x1942, 0x18c2, 0x18c2, 0x18c2, 0x18c3, 0x2123, 0x2a23, 0x2ac3, 0x3b83, 0x3bc4, 0x3bc4, 0x3284, 0x3b05, 0x4c25, 0x4b07, 0x83ed, 0xacd1, 0xb513, 0xad76, 
    0xad76, 0x738e, 0x4a48, 0x39c6, 0x3185, 0x2944, 0x2924, 0x2124, 0x41e7, 0x6aeb, 0x836d, 0x8bae, 0x940f, 0x9c2f, 0x9c70, 0x9c71, 0xa4b1, 0xa4b1, 0xa4b1, 0xa4b1, 0xa4b1, 0xa4d1, 0xa4d1, 0xa4d1, 0xa4d1, 0xa491, 0xa491, 0xa4b1, 0xa4b1, 0xa491, 0x9c90, 0x5347, 0x21c3, 0x1962, 0x19e2, 0x2ae2, 0x2ae2, 0x2282, 0x2242, 0x2b22, 0x22a2, 0x2ae2, 0x3c22, 0x3c02, 0x3342, 0x2182, 0x18c2, 0x18c2, 0x18c2, 0x18e3, 0x2183, 0x32e3, 0x3363, 0x3b83, 0x3bc4, 0x43c4, 0x3ac4, 0x43a5, 0x4be6, 0x52e7, 0x9c2f, 0xacd1, 0xb533, 0xad76, 
    0xad76, 0x8c71, 0x5289, 0x41e7, 0x3186, 0x2945, 0x2924, 0x2124, 0x39a6, 0x62aa, 0x834c, 0x8bad, 0x8bee, 0x942f, 0x9c50, 0x9c70, 0x9c70, 0x9c71, 0x9c91, 0x9c91, 0xa4b1, 0xa4b1, 0x9cb1, 0xa4d1, 0xa4b1, 0xa4b1, 0xa4b1, 0xa4b1, 0xa4b1, 0xa491, 0xa4b1, 0x7c0c, 0x3263, 0x1982, 0x1982, 0x2222, 0x2202, 0x2222, 0x2ae2, 0x2b22, 0x22c2, 0x2ae2, 0x33e2, 0x3c62, 0x2b02, 0x1962, 0x18c2, 0x18c2, 0x18c3, 0x1903, 0x2aa3, 0x3c23, 0x3ba3, 0x3c03, 0x3bc4, 0x3b84, 0x3b04, 0x4c25, 0x4b46, 0x736a, 0xa44f, 0xacd1, 0xad54, 0xad76, 
    0xad76, 0xa535, 0x5aca, 0x4a28, 0x39a6, 0x3165, 0x2944, 0x2924, 0x2965, 0x5a89, 0x7b2c, 0x836d, 0x8bad, 0x93ef, 0x942f, 0x9c50, 0x9c70, 0x9c70, 0x9c91, 0x9cb1, 0x9cb1, 0x9c91, 0xa4d1, 0xa4b1, 0xa4b1, 0xa4d1, 0xa4b1, 0xa4b1, 0xa491, 0xa491, 0xa491, 0x9c90, 0x4b45, 0x21e3, 0x1942, 0x1942, 0x19c2, 0x22c2, 0x33a2, 0x33c2, 0x2b62, 0x33c2, 0x4d02, 0x4d22, 0x3c22, 0x21c2, 0x18c2, 0x18c2, 0x18c2, 0x2162, 0x2ae3, 0x33a3, 0x3c23, 0x4463, 0x3be4, 0x3ae4, 0x3ae5, 0x4345, 0x52e7, 0x940e, 0xa450, 0xacf2, 0xad76, 0xad76, 
    0xad96, 0xad76, 0x738e, 0x5268, 0x41e7, 0x3185, 0x2944, 0x2924, 0x2924, 0x4a48, 0x730b, 0x7b6c, 0x83ad, 0x8bce, 0x940f, 0x9430, 0x9450, 0x9c70, 0x9c70, 0x9c90, 0x9cb1, 0x9cb1, 0xa4b1, 0x9cb1, 0xa4b1, 0xa4b1, 0xa4b1, 0xa491, 0x9c70, 0xa491, 0xa491, 0x9c91, 0x7c0c, 0x32c4, 0x21a2, 0x1942, 0x19c2, 0x2ae2, 0x33a2, 0x33c2, 0x2b62, 0x44a2, 0x5562, 0x4d22, 0x33c2, 0x2202, 0x18c2, 0x18c2, 0x18c2, 0x2182, 0x2aa3, 0x3bc3, 0x4463, 0x4423, 0x3b84, 0x3b04, 0x3ac5, 0x42a6, 0x738b, 0x9c2f, 0xa470, 0xad13, 0xad76, 0xad96, 
    0xad96, 0xad76, 0x94b2, 0x5289, 0x4207, 0x39a6, 0x3165, 0x2944, 0x2924, 0x41e7, 0x6aca, 0x7b4c, 0x836d, 0x8bae, 0x8bef, 0x942f, 0x942f, 0x9450, 0x9c70, 0x9c70, 0x9c90, 0x9c91, 0x9c91, 0x9cb1, 0x9cb1, 0x9cb1, 0x9c91, 0x9c70, 0x9c70, 0xa491, 0xa491, 0x9c90, 0x9c70, 0x5b87, 0x2a63, 0x1982, 0x1982, 0x2202, 0x2282, 0x2b02, 0x2ac2, 0x4d22, 0x4d22, 0x4482, 0x2b02, 0x1982, 0x18c2, 0x18c2, 0x1942, 0x2ac2, 0x3363, 0x4ce3, 0x44a3, 0x3ba3, 0x3304, 0x3ae4, 0x42a5, 0x6329, 0x93ed, 0x9c0f, 0xac91, 0xad55, 0xad76, 0xad96, 
    0xad96, 0xad96, 0xad76, 0x6b2c, 0x4a48, 0x39c6, 0x3185, 0x2945, 0x2924, 0x3185, 0x5a89, 0x730b, 0x836c, 0x838d, 0x8bee, 0x940f, 0x940f, 0x9430, 0x9c50, 0x9c70, 0x9c70, 0x9c70, 0x9c91, 0x9c91, 0x9c91, 0x9cb1, 0x9c90, 0x9c70, 0x9c70, 0x9c50, 0x9c70, 0x9c70, 0x9c50, 0x8c2e, 0x4b45, 0x2a43, 0x19a2, 0x1962, 0x19c2, 0x2222, 0x2282, 0x4482, 0x44a2, 0x3362, 0x2282, 0x21c2, 0x18c2, 0x18c2, 0x21c2, 0x3c03, 0x4d23, 0x4d03, 0x4463, 0x32c3, 0x3264, 0x3aa5, 0x52e8, 0x8c0d, 0x940e, 0x9c4f, 0xacf2, 0xad76, 0xad96, 0xad96, 
    0xad96, 0xad96, 0xad76, 0x9492, 0x5289, 0x4207, 0x39a6, 0x3165, 0x2944, 0x2944, 0x5248, 0x6aea, 0x7b2c, 0x836c, 0x83ad, 0x8bee, 0x8bee, 0x942f, 0x9450, 0x9470, 0x9470, 0x9450, 0x9c70, 0x9c91, 0x9c90, 0x9c91, 0x9c91, 0x9c90, 0x9c90, 0x9c70, 0x9c70, 0x9c70, 0x9450, 0x944f, 0x840c, 0x4b65, 0x3283, 0x21c2, 0x1982, 0x19c2, 0x2222, 0x33c2, 0x3382, 0x2b02, 0x2ac2, 0x2ae2, 0x1902, 0x1902, 0x2b03, 0x3383, 0x3363, 0x3383, 0x32c3, 0x29e4, 0x3a85, 0x5b28, 0x840d, 0x942f, 0x942f, 0xa490, 0xad54, 0xad76, 0xad96, 0xad96, 
    0xad96, 0xad96, 0xad96, 0xad76, 0x6b4c, 0x4a48, 0x41e7, 0x3185, 0x3165, 0x2944, 0x41e7, 0x62aa, 0x730b, 0x7b4c, 0x838d, 0x8bce, 0x8bce, 0x93ef, 0x942f, 0x9450, 0x9470, 0x944f, 0x942f, 0x9c70, 0x9c70, 0x9c90, 0x9c90, 0x9c90, 0x9c70, 0x9470, 0x9450, 0x9c50, 0x9450, 0x942f, 0x942f, 0x7c0c, 0x5386, 0x3283, 0x21c2, 0x21c2, 0x19a2, 0x2222, 0x2ac2, 0x22a2, 0x2262, 0x2b22, 0x1922, 0x2222, 0x3322, 0x2a43, 0x2a43, 0x2a63, 0x29e3, 0x31c4, 0x6369, 0x842d, 0x8c0e, 0x942f, 0x9c70, 0xacf2, 0xad76, 0xad96, 0xad96, 0xad96, 
    0xad96, 0xad96, 0xad96, 0xad76, 0x94b2, 0x5aa9, 0x4a28, 0x39c6, 0x3185, 0x2965, 0x3165, 0x5269, 0x72eb, 0x7b2c, 0x7b6d, 0x83ad, 0x83ad, 0x8bee, 0x8c0f, 0x942f, 0x9450, 0x942f, 0x944f, 0x9450, 0x9470, 0x9c70, 0x9c70, 0x9450, 0x9450, 0x9450, 0x9450, 0x944f, 0x944f, 0x944f, 0x942f, 0x942f, 0x7bec, 0x5366, 0x3ac4, 0x2a43, 0x21e2, 0x19a2, 0x19c2, 0x2222, 0x2b22, 0x3362, 0x21c2, 0x2a82, 0x2203, 0x2203, 0x29c3, 0x29e4, 0x3a05, 0x5b29, 0x8c0d, 0x8c0e, 0x942f, 0x944f, 0xa4b1, 0xad55, 0xad76, 0xad96, 0xad96, 0xad96, 
    0xad96, 0xad96, 0xad96, 0xad76, 0xad76, 0x7bae, 0x5269, 0x4207, 0x39a6, 0x3165, 0x2945, 0x4207, 0x62aa, 0x72eb, 0x7b4c, 0x838d, 0x838d, 0x8bee, 0x8bef, 0x942f, 0x942f, 0x942f, 0x9450, 0x9450, 0x9450, 0x9450, 0x9450, 0x9450, 0x9450, 0x9450, 0x9450, 0x942f, 0x942f, 0x942f, 0x942f, 0x940f, 0x8bee, 0x83ed, 0x6ba9, 0x4b05, 0x3284, 0x2a23, 0x21c2, 0x2222, 0x4462, 0x3362, 0x2a63, 0x2a83, 0x21a3, 0x29e3, 0x3a45, 0x5b28, 0x7c0c, 0x8bee, 0x8bee, 0x8c0e, 0x942f, 0x9c90, 0xad13, 0xad76, 0xad76, 0xad96, 0xad96, 0xad96, 
    0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xa535, 0x630b, 0x4a48, 0x41e7, 0x39a6, 0x3165, 0x3185, 0x5a69, 0x6a89, 0x72eb, 0x7b2c, 0x7b4c, 0x83ad, 0x8bce, 0x8bee, 0x8c0f, 0x8c0f, 0x942f, 0x942f, 0x942f, 0x9450, 0x9450, 0x9450, 0x9450, 0x942f, 0x942f, 0x8c0f, 0x942f, 0x940f, 0x940f, 0x8bee, 0x8c0e, 0x8c0e, 0x8c0f, 0x7bcc, 0x6369, 0x4b05, 0x3aa4, 0x4304, 0x4344, 0x3ac3, 0x4344, 0x3aa5, 0x4ae6, 0x6368, 0x7bec, 0x8c0e, 0x8bee, 0x8c0e, 0x8bee, 0x8c0e, 0x9c6f, 0xa4d1, 0xad75, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 
    0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0x94b3, 0x5aaa, 0x4a28, 0x39c6, 0x3185, 0x3165, 0x4207, 0x6289, 0x6289, 0x72ca, 0x730b, 0x7b6d, 0x83ad, 0x8bce, 0x8bee, 0x8c0f, 0x8c2f, 0x8c0f, 0x8c2f, 0x8c2f, 0x8c2f, 0x8c2f, 0x942f, 0x8c0f, 0x8c0f, 0x8c0f, 0x8c0f, 0x8c0f, 0x8c0f, 0x8bee, 0x8bee, 0x8bee, 0x8bee, 0x8bee, 0x8bee, 0x83cd, 0x7bab, 0x6b8a, 0x6369, 0x6349, 0x6b8a, 0x73ab, 0x838c, 0x8bce, 0x8bce, 0x8bce, 0x8bee, 0x8c0e, 0x8c0e, 0x942f, 0xa4b1, 0xad55, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 
    0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xa576, 0x8c51, 0x5a89, 0x4a28, 0x39c6, 0x3185, 0x3185, 0x5248, 0x6269, 0x62a9, 0x6aea, 0x7b4c, 0x7b8d, 0x83ad, 0x83ce, 0x83ce, 0x8bee, 0x8bee, 0x8c0f, 0x8c0f, 0x8c0f, 0x8c0f, 0x8c0f, 0x8bee, 0x8c0f, 0x8c0f, 0x8c0e, 0x8c0e, 0x8bee, 0x8c0e, 0x8c0e, 0x8bee, 0x8bee, 0x8bee, 0x8bee, 0x8bee, 0x8bee, 0x8bee, 0x83ce, 0x83ae, 0x83ad, 0x836c, 0x836c, 0x8bad, 0x8bcd, 0x8bce, 0x8bce, 0x8bee, 0x940f, 0x9c90, 0xa534, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 
    0xad76, 0xa576, 0xa576, 0xa576, 0xa576, 0xa576, 0xa576, 0xa555, 0x840f, 0x5289, 0x4a07, 0x39c6, 0x3185, 0x41c6, 0x5a49, 0x6289, 0x62a9, 0x6b0b, 0x734c, 0x7b8d, 0x7b8d, 0x83ad, 0x83ce, 0x83ce, 0x83ce, 0x83ee, 0x8bee, 0x8c0e, 0x8c0e, 0x8bee, 0x83ee, 0x8bee, 0x83ee, 0x83ee, 0x83ee, 0x8bee, 0x8bee, 0x83ee, 0x83ee, 0x83ee, 0x8bee, 0x8bee, 0x83ee, 0x83ce, 0x83ad, 0x83ad, 0x838d, 0x832b, 0x830b, 0x838d, 0x8bce, 0x8bee, 0x8c0e, 0x942f, 0x9c70, 0xa4f3, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 0xad76, 
    0xa576, 0xa576, 0xa576, 0xa576, 0xa576, 0xa576, 0xa576, 0xa555, 0xa555, 0x7bce, 0x5289, 0x4a27, 0x39c6, 0x39a6, 0x4a07, 0x5a69, 0x6289, 0x62aa, 0x6b0b, 0x734c, 0x7b8d, 0x7b8d, 0x83ad, 0x83ad, 0x83ad, 0x83ce, 0x83ee, 0x83ee, 0x83ee, 0x83ee, 0x83ee, 0x83ee, 0x83ce, 0x83ce, 0x83ce, 0x83ce, 0x83ce, 0x83cd, 0x83ce, 0x83ce, 0x83ce, 0x83ce, 0x83ad, 0x83ad, 0x7bad, 0x83ad, 0x7b6c, 0x830b, 0x7b0b, 0x83ad, 0x8bce, 0x8bee, 0x942f, 0x9c70, 0xa4f3, 0xa555, 0xa576, 0xa576, 0xa576, 0xa576, 0xa576, 0xa576, 0xa576, 0xa576, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0x7bef, 0x5a89, 0x4a28, 0x41e6, 0x39a6, 0x5228, 0x5a69, 0x6289, 0x62aa, 0x6aeb, 0x734c, 0x7b6c, 0x7b6c, 0x7b6d, 0x7b6d, 0x838d, 0x83ad, 0x83ad, 0x83ad, 0x83ce, 0x83cd, 0x83ce, 0x83ce, 0x83ce, 0x83ad, 0x83ad, 0x838d, 0x83ad, 0x83cd, 0x83cd, 0x83ad, 0x83ad, 0x838d, 0x7b8c, 0x7b6c, 0x7b4c, 0x7b2b, 0x7aeb, 0x836c, 0x83ad, 0x8bee, 0x8c0f, 0x9c70, 0xa4f3, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa576, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0x8430, 0x5aaa, 0x4a48, 0x41e7, 0x39c6, 0x5248, 0x5a69, 0x6269, 0x6289, 0x6aca, 0x732c, 0x734c, 0x7b6d, 0x7b8d, 0x7b8d, 0x7bad, 0x7bad, 0x7b8d, 0x83ad, 0x83cd, 0x83cd, 0x83cd, 0x83ad, 0x83ad, 0x83ad, 0x7b8d, 0x838d, 0x83ad, 0x83ad, 0x7b8d, 0x7b8d, 0x7b6c, 0x7b6c, 0x7b4c, 0x7b4b, 0x7b2b, 0x7b4c, 0x83ad, 0x8bce, 0x8c0e, 0x9c70, 0xa4f3, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0x94b2, 0x630b, 0x5268, 0x4207, 0x41e7, 0x5248, 0x5a68, 0x6269, 0x6269, 0x62aa, 0x6aeb, 0x732c, 0x734c, 0x7b6d, 0x7b8d, 0x7b8d, 0x7b8d, 0x7bad, 0x7bad, 0x7bad, 0x7bad, 0x7bad, 0x7bad, 0x7b8d, 0x7b6c, 0x7b8d, 0x7b8d, 0x7b8c, 0x7b8d, 0x7b6c, 0x7b6c, 0x7b4c, 0x7b4b, 0x7b0b, 0x7b2c, 0x836c, 0x8bcd, 0x940e, 0x9c70, 0xa514, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0x9d14, 0x7bae, 0x5aa9, 0x4a48, 0x4207, 0x5248, 0x5a69, 0x6269, 0x6269, 0x6289, 0x6aca, 0x6b0b, 0x732c, 0x734c, 0x734c, 0x7b6c, 0x7b8d, 0x7b8d, 0x7b8d, 0x7b8d, 0x7b8d, 0x7b6c, 0x7b6c, 0x7b6c, 0x7b6c, 0x7b6c, 0x7b6c, 0x7b6c, 0x7b4c, 0x7b4c, 0x7b0b, 0x7b2c, 0x7b6c, 0x838d, 0x8bce, 0x942f, 0x9cb1, 0xa534, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0x9492, 0x6b4c, 0x5a89, 0x4a48, 0x5248, 0x5a89, 0x6289, 0x6269, 0x6269, 0x6289, 0x6aaa, 0x6aca, 0x6b0b, 0x732b, 0x734c, 0x734c, 0x736c, 0x736c, 0x736c, 0x7b6c, 0x7b4c, 0x732b, 0x734c, 0x734c, 0x732b, 0x730b, 0x730b, 0x7b0b, 0x7b6c, 0x838d, 0x83cd, 0x8c0e, 0x9c70, 0xa513, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xa555, 0xa555, 0xad55, 0xad55, 0xad55, 0xad55, 0xad55, 0xad55, 0xad55, 0xad55, 0xad55, 0xad55, 0xad55, 0xad55, 0xad55, 0xa555, 0xa535, 0x8c71, 0x734c, 0x5aaa, 0x5269, 0x5a89, 0x62aa, 0x6289, 0x6289, 0x62aa, 0x6aca, 0x6aca, 0x6aaa, 0x6aca, 0x6aeb, 0x72eb, 0x730b, 0x730b, 0x730b, 0x72eb, 0x72eb, 0x72eb, 0x72eb, 0x732b, 0x734c, 0x7b6c, 0x7b8d, 0x83cd, 0x8bee, 0x9450, 0xa4d2, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xad55, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad55, 0xa555, 0xa535, 0x9491, 0x7bae, 0x6b0b, 0x62ea, 0x6aeb, 0x730b, 0x730b, 0x730b, 0x730b, 0x730b, 0x6aeb, 0x6aca, 0x6aaa, 0x6aca, 0x6aea, 0x6aea, 0x72ea, 0x72ea, 0x730b, 0x734b, 0x7b6c, 0x838d, 0x83ce, 0x8c0e, 0x9470, 0xa4f3, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad55, 0xa555, 0x9cf3, 0x8c71, 0x7bce, 0x736c, 0x7b6c, 0x7b8d, 0x7b6d, 0x7b6c, 0x7b6c, 0x7b6c, 0x7b4c, 0x734c, 0x732b, 0x732b, 0x7b4c, 0x7b6c, 0x83ad, 0x83cd, 0x8c0e, 0x9450, 0x9cb2, 0xa534, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 
    0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad75, 0xad55, 0xad55, 0xa555, 0xa534, 0x9cd3, 0x9471, 0x8c50, 0x8c2f, 0x8c0f, 0x8c0f, 0x8c0e, 0x8c0f, 0x942f, 0x9450, 0x9c71, 0x9cb1, 0xa4d2, 0xa514, 0xa535, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555, 0xa555
};
const tImage eye10 = { image_data_dragoneye010, 64, 64,
    4096, 16, false, 0x0000 };

