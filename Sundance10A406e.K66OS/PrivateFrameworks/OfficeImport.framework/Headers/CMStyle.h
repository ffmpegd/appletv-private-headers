/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableString, NSMutableDictionary;

@interface CMStyle : NSObject {
	NSMutableDictionary *properties;	// 4 = 0x4
	NSMutableString *mStyleString;	// 8 = 0x8
}
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x34f5777d; converted property
- (id)init;	// 0x34ecd40d
- (id)initWithStyle:(id)style;	// 0x35036e81
- (void)addProperty:(id)property forKey:(id)key;	// 0x34ed5115
- (void)appendDefaultBorderStyle;	// 0x34fe88fd
- (void)appendPositionInfoFromRect:(CGRect)rect;	// 0x34ecff65
- (void)appendPropertyForName:(id)name color:(id)color;	// 0x34fbde89
- (void)appendPropertyForName:(id)name floatValue:(float)value;	// 0x34fe8925
- (void)appendPropertyForName:(id)name intValue:(int)value;	// 0x34ed66c9
- (void)appendPropertyForName:(id)name length:(double)length unit:(int)unit;	// 0x34ed47a5
- (void)appendPropertyForName:(id)name oadTextSpacing:(id)spacing;	// 0x34ed4b59
- (void)appendPropertyForName:(id)name oadTextSpacing:(id)spacing lineHeight:(float)height unit:(int)unit;	// 0x34ed4c85
- (void)appendPropertyForName:(id)name oadTextSpacing:(id)spacing unit:(int)unit;	// 0x34ed4b7d
- (void)appendPropertyForName:(id)name stringValue:(id)value;	// 0x34ecd49d
- (void)appendPropertyForName:(id)name stringWithColons:(id)colons;	// 0x34ed17b5
- (void)appendPropertyString:(id)string;	// 0x34fbe225
- (void)appendSizeInfoFromRect:(CGRect)rect;	// 0x34ed4a35
- (id)attributeForName:(id)name;	// 0x34f55891
- (id)cssStyleString;	// 0x34ecd5b9
- (void)dealloc;	// 0x34ecd87d
// converted property getter: - (id)properties;	// 0x34f5777d
- (id)propertyForName:(id)name;	// 0x34f16745
@end

