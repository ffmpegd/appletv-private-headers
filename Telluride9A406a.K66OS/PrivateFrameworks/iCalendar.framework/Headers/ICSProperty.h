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
@property(retain) NSMutableDictionary *parameters;	// G=0x3152db21; S=0x3152d765; converted property
@property(readonly, assign) unsigned type;	// G=0x3152d705; converted property
@property(readonly, retain) id value;	// G=0x3152d715; converted property
- (id)initWithCoder:(id)coder;	// 0x3152d959
- (id)initWithValue:(id)value type:(unsigned)type;	// 0x3152da5d
- (id)ICSStringWithOptions:(unsigned)options;	// 0x3152d8b9
- (void)ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x3152d8c9
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x3150a885
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string additionalParameters:(id)parameters;	// 0x3150a3e1
- (void)_setParsedValues:(id)values type:(unsigned)type;	// 0x31516db9
- (void)addParameter:(id)parameter withRawValue:(id)rawValue options:(unsigned)options;	// 0x31516bb5
- (void)addParametersFromDictionary:(id)dictionary;	// 0x3152d745
- (id)allParameters;	// 0x3152da25
- (void)dealloc;	// 0x3152d6a1
- (id)description;	// 0x3152db51
- (void)encodeWithCoder:(id)coder;	// 0x3152d8d9
- (BOOL)isMultiValued;	// 0x3152d701
- (id)parameterValueForName:(id)name;	// 0x3152d725
// converted property getter: - (id)parameters;	// 0x3152db21
- (void)removeParameterValueForName:(id)name;	// 0x3152d899
- (void)setParameterValue:(id)value forName:(id)name;	// 0x3152d80d
// converted property setter: - (void)setParameters:(id)parameters;	// 0x3152d765
- (void)setValue:(id)value type:(int)type;	// 0x3152daa9
- (void)setValueAsProperty:(id)property withRawValue:(const char *)rawValue options:(unsigned)options;	// 0x31516e09
- (id)stringValue;	// 0x3152db31
// converted property getter: - (unsigned)type;	// 0x3152d705
// converted property getter: - (id)value;	// 0x3152d715
@end
