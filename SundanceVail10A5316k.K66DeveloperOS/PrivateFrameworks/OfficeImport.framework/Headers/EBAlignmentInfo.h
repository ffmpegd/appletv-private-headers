/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EBAlignmentInfo : NSObject {
}
+ (int)convertEDHorizontalAlignmentEnumToXl:(int)xl;	// 0x3120b2dd
+ (int)convertEDVerticalAlignmentEnumToXl:(int)xl;	// 0x3120b2e9
+ (int)convertXlHorizAlignEnumToED:(int)ed;	// 0x3109c6c5
+ (int)convertXlVertAlignEnumToED:(int)ed;	// 0x3109c709
+ (id)edAlignmentInfoFromXlDXfAlign:(XlDXfAlign *)xlDXfAlign;	// 0x3120af05
+ (id)edAlignmentInfoFromXlGraphicsInfo:(XlGraphicsInfo *)xlGraphicsInfo;	// 0x310c8879
+ (id)edAlignmentInfoFromXlXf:(XlXf *)xlXf;	// 0x3109c4f5
+ (void)writeAlignmentInfo:(id)info toXlGraphicsInfo:(XlGraphicsInfo *)xlGraphicsInfo;	// 0x3120b279
+ (void)writeAlignmentInfo:(id)info toXlXf:(XlXf *)xlXf;	// 0x3120afc9
+ (XlDXfAlign *)xlDXfAlignFromEDAlignmentInfo:(id)edalignmentInfo;	// 0x3120b0a1
@end
