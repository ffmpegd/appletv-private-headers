/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDString;

@interface CHDDataValue : NSObject {
	CHDDataPoint mDataPoint;	// 4 = 0x4
}
@property(assign) unsigned contentFormatId;	// G=0x349f2c75; S=0x34974f89; converted property
@property(assign) CHDDataPoint *dataPoint;	// G=0x34982379; S=0x349f2b91; converted property
@property(assign) int index;	// G=0x349f2b81; S=0x34982331; converted property
@property(assign) EDValue *value;	// G=0x3497d4e1; S=0x3499e249; converted property
+ (id)dataValue;	// 0x3499e1bd
+ (id)dataValueWithIndex:(int)index value:(EDValue *)value;	// 0x34974ec9
- (id)init;	// 0x3499e205
- (id)initWithIndex:(int)index value:(EDValue *)value;	// 0x34974f39
- (id).cxx_construct;	// 0x34974f19
- (void).cxx_destruct;	// 0x3497f509
// converted property getter: - (unsigned)contentFormatId;	// 0x349f2c75
- (id)contentFormatWithResources:(id)resources;	// 0x349f2bb9
// converted property getter: - (CHDDataPoint *)dataPoint;	// 0x34982379
// converted property getter: - (int)index;	// 0x349f2b81
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x34974f89
- (void)setContentFormatWithResources:(id)resources resources:(id)resources2;	// 0x349f2bf5
// converted property setter: - (void)setDataPoint:(CHDDataPoint *)point;	// 0x349f2b91
// converted property setter: - (void)setIndex:(int)index;	// 0x34982331
// converted property setter: - (void)setValue:(EDValue *)value;	// 0x3499e249
// converted property getter: - (EDValue *)value;	// 0x3497d4e1
@end

