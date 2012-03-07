/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "ICSWriting.h"

@class NSMutableDictionary;

@interface ICSProperty : NSObject <NSCoding, ICSWriting> {
	NSMutableDictionary *_parameters;	// 4 = 0x4
	unsigned _type;	// 8 = 0x8
	id _value;	// 12 = 0xc
}
@property(retain) NSMutableDictionary *parameters;	// G=0x338b1b21; S=0x338b1765; converted property
@property(readonly, assign) unsigned type;	// G=0x338b1705; converted property
@property(readonly, retain) id value;	// G=0x338b1715; converted property
- (id)initWithCoder:(id)coder;	// 0x338b1959
- (id)initWithValue:(id)value type:(unsigned)type;	// 0x338b1a5d
- (id)ICSStringWithOptions:(unsigned)options;	// 0x338b18b9
- (void)ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x338b18c9
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x3388e885
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string additionalParameters:(id)parameters;	// 0x3388e3e1
- (void)_setParsedValues:(id)values type:(unsigned)type;	// 0x3389adb9
- (void)addParameter:(id)parameter withRawValue:(id)rawValue options:(unsigned)options;	// 0x3389abb5
- (void)addParametersFromDictionary:(id)dictionary;	// 0x338b1745
- (id)allParameters;	// 0x338b1a25
- (void)dealloc;	// 0x338b16a1
- (id)description;	// 0x338b1b51
- (void)encodeWithCoder:(id)coder;	// 0x338b18d9
- (BOOL)isMultiValued;	// 0x338b1701
- (id)parameterValueForName:(id)name;	// 0x338b1725
// converted property getter: - (id)parameters;	// 0x338b1b21
- (void)removeParameterValueForName:(id)name;	// 0x338b1899
- (void)setParameterValue:(id)value forName:(id)name;	// 0x338b180d
// converted property setter: - (void)setParameters:(id)parameters;	// 0x338b1765
- (void)setValue:(id)value type:(int)type;	// 0x338b1aa9
- (void)setValueAsProperty:(id)property withRawValue:(const char *)rawValue options:(unsigned)options;	// 0x3389ae09
- (id)stringValue;	// 0x338b1b31
// converted property getter: - (unsigned)type;	// 0x338b1705
// converted property getter: - (id)value;	// 0x338b1715
@end

