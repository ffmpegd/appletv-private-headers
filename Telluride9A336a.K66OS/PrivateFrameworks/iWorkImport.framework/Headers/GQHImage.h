/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQHImage : NSObject {
}
+ (int)handleFloatingImageBinary:(id)binary geometry:(id)geometry style:(id)style crop:(id)crop maskPath:(id)path state:(id)state;	// 0x304a40b1
+ (int)handleFloatingMedia:(id)media state:(id)state;	// 0x304a3e61
+ (int)handleFloatingWebView:(id)view state:(id)state;	// 0x304a3f99
+ (int)handleInlineImageBinary:(id)binary geometry:(id)geometry cropGeometry:(id)geometry3 maskPath:(id)path style:(id)style state:(id)state;	// 0x304a45b9
+ (int)handleInlineImageBinary:(id)binary geometry:(id)geometry style:(id)style state:(id)state;	// 0x304a4081
+ (int)handleInlineMedia:(id)media state:(id)state;	// 0x304a3efd
+ (int)handleInlineWebView:(id)view state:(id)state;	// 0x304a4011
+ (void)mapCrop:(id)crop bounds:(id)bounds style:(id)style;	// 0x304a4435
+ (void)mapMaskedImage:(id)image maskPath:(id)path geometry:(id)geometry crop:(id)crop graphicStyle:(id)style state:(id)state;	// 0x304a4541
@end

