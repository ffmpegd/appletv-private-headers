/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface OABStroke : NSObject {
}
+ (int)readCapStyle:(int)style;	// 0x34e75585
+ (int)readCompoundType:(int)type;	// 0x34e75609
+ (int)readLineEndLength:(int)length;	// 0x34e75345
+ (int)readLineEndType:(int)type;	// 0x34e7532d
+ (int)readLineEndWidth:(int)width;	// 0x34e75339
+ (id)readLineEndWithType:(int)type width:(int)width length:(int)length;	// 0x350966b5
+ (int)readPresetDashStyle:(int)style;	// 0x34e7513d
+ (id)readStrokeFromShapeBaseManager:(id)shapeBaseManager colorPalette:(id)palette;	// 0x34e740b5
+ (int)writeCapStyle:(int)style;	// 0x35096c01
+ (int)writeCompoundType:(int)type;	// 0x35096b91
+ (int)writeLineEndLength:(int)length;	// 0x35096bf5
+ (int)writeLineEndType:(int)type;	// 0x35096bdd
+ (int)writeLineEndWidth:(int)width;	// 0x35096be9
+ (int)writePresetDashStyle:(int)style;	// 0x35096b9d
+ (void)writePresetDashStyleForCustomDash:(id)customDash toStroke:(EshStroke *)stroke state:(id)state;	// 0x35096c0d
+ (void)writeStroke:(id)stroke toStroke:(EshStroke *)stroke2 state:(id)state;	// 0x35096755
@end

