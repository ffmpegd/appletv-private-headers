/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OAXTextCharPropertyBag : NSObject {
}
+ (void)readCharacterProperties:(xmlNode *)properties characterProperties:(id)properties2 drawingState:(id)state;	// 0x36afee91
+ (void)readFont:(xmlNode *)font characterProperties:(id)properties;	// 0x36aff515
+ (void)readFormatting:(xmlNode *)formatting characterProperties:(id)properties drawingState:(id)state;	// 0x36c20431
+ (void)readUnderlineFill:(xmlNode *)fill underline:(id)underline drawingState:(id)state;	// 0x36c20311
+ (void)readUnderlineType:(id)type underline:(id)underline;	// 0x36b24425
@end

