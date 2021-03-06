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
@property(retain) NSMutableDictionary *parameters;	// G=0x31b6c999; S=0x31b6c5dd; converted property
@property(readonly, assign) unsigned type;	// G=0x31b6c57d; converted property
@property(readonly, retain) id value;	// G=0x31b6c58d; converted property
- (id)initWithCoder:(id)coder;	// 0x31b6c7d5
- (id)initWithValue:(id)value type:(unsigned)type;	// 0x31b6c8dd
- (id)ICSStringWithOptions:(unsigned)options;	// 0x31b6c731
- (void)ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x31b6c741
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x31b4a769
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string additionalParameters:(id)parameters;	// 0x31b4a251
- (void)_setParsedValues:(id)values type:(unsigned)type;	// 0x31b563e9
- (void)addParameter:(id)parameter withRawValue:(id)rawValue options:(unsigned)options;	// 0x31b561e1
- (void)addParametersFromDictionary:(id)dictionary;	// 0x31b6c5bd
- (id)allParameters;	// 0x31b6c8a5
- (void)dealloc;	// 0x31b6c515
- (id)description;	// 0x31b6c9c9
- (void)encodeWithCoder:(id)coder;	// 0x31b6c751
- (BOOL)isMultiValued;	// 0x31b6c579
- (id)parameterValueForName:(id)name;	// 0x31b6c59d
// converted property getter: - (id)parameters;	// 0x31b6c999
- (void)removeParameterValueForName:(id)name;	// 0x31b6c711
- (void)setParameterValue:(id)value forName:(id)name;	// 0x31b6c681
// converted property setter: - (void)setParameters:(id)parameters;	// 0x31b6c5dd
- (void)setValue:(id)value type:(int)type;	// 0x31b6c929
- (void)setValueAsProperty:(id)property withRawValue:(const char *)rawValue options:(unsigned)options;	// 0x31b56439
- (id)stringValue;	// 0x31b6c9a9
// converted property getter: - (unsigned)type;	// 0x31b6c57d
// converted property getter: - (id)value;	// 0x31b6c58d
@end

