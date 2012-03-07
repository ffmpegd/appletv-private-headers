/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OABStroke : NSObject {
}
+ (int)readCapStyle:(int)style;	// 0x30c5efd9
+ (int)readCompoundType:(int)type;	// 0x30c5f075
+ (int)readLineEndLength:(int)length;	// 0x30c5ed3d
+ (int)readLineEndType:(int)type;	// 0x30c5ed01
+ (int)readLineEndWidth:(int)width;	// 0x30c5ed29
+ (id)readLineEndWithType:(int)type width:(int)width length:(int)length;	// 0x30eded85
+ (int)readPresetDashStyle:(int)style;	// 0x30c5e9d5
+ (id)readStrokeFromShapeBaseManager:(id)shapeBaseManager colorPalette:(id)palette;	// 0x30c5d279
+ (int)writeCapStyle:(int)style;	// 0x30eded71
+ (int)writeCompoundType:(int)type;	// 0x30edecc1
+ (int)writeLineEndLength:(int)length;	// 0x30eded5d
+ (int)writeLineEndType:(int)type;	// 0x30eded21
+ (int)writeLineEndWidth:(int)width;	// 0x30eded49
+ (int)writePresetDashStyle:(int)style;	// 0x30edece1
+ (void)writePresetDashStyleForCustomDash:(id)customDash toStroke:(EshStroke *)stroke state:(id)state;	// 0x30edee2d
@end

