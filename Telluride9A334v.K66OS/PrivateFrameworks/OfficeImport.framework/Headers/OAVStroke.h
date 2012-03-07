/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAVStroke : NSObject {
}
+ (int)readCapStyle:(id)style;	// 0x3567f71d
+ (int)readCompoundType:(id)type;	// 0x3567f7f1
+ (void)readDashStyleFromManager:(id)manager toStroke:(id)stroke;	// 0x3567eddd
+ (void)readFillStyleFromManager:(id)manager toStroke:(id)stroke;	// 0x3567eb45
+ (id)readFromManager:(id)manager;	// 0x3567e7c1
+ (void)readJoinStyleFromManager:(id)manager toStroke:(id)stroke;	// 0x3567f025
+ (void)readLineEnd:(id)end type:(id)type width:(id)width length:(id)length;	// 0x3567f325
+ (int)readLineEndLength:(id)length;	// 0x3567f48d
+ (int)readLineEndType:(id)type;	// 0x3567f3b5
+ (int)readLineEndWidth:(id)width;	// 0x3567f421
+ (int)readPresetDashStyle:(id)style;	// 0x3567efa9
+ (id)targetFgColorWithManager:(id)manager;	// 0x3567ea01
@end

