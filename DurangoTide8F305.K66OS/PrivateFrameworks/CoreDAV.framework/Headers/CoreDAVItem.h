/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library
#import "NSObject.h"
#import "CoreDAVItem.h"

@class NSMutableArray, NSMutableSet, NSString, NSData;

@protocol CoreDAVItem <NSObject>
- (id)copyParseRules;
- (void)parserFoundAttributes:(id)attributes;
- (void)parserFoundPayload:(id)payload;
- (void)parserFoundUnrecognizedElement:(id)element;
- (void)parserSuggestsBaseURL:(id)url;
- (BOOL)validate;
- (void)write:(id)write;
@end

@interface CoreDAVItem : NSObject <CoreDAVItem> {
	NSString *_name;	// 4 = 0x4
	NSString *_nameSpace;	// 8 = 0x8
	NSMutableSet *_attributes;	// 12 = 0xc
	NSMutableArray *_extraChildItems;	// 16 = 0x10
	NSData *_payload;	// 20 = 0x14
}
@property(retain) NSMutableSet *attributes;	// G=0x33880f71; S=0x33881011; @synthesize=_attributes
@property(retain) NSMutableArray *extraChildItems;	// G=0x33880f89; S=0x3388103d; @synthesize=_extraChildItems
@property(retain) NSString *name;	// G=0x33880f41; S=0x33880fb9; @synthesize=_name
@property(retain) NSString *nameSpace;	// G=0x33880f59; S=0x33880fe5; @synthesize=_nameSpace
@property(retain) NSData *payload;	// G=0x33880fa1; S=0x33881069; @synthesize=_payload
@property(retain) id payloadAsString;	// G=0x338808b5; S=0x33880889; converted property
- (id)init;	// 0x33880985
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x33880afd
// declared property getter: - (id)attributes;	// 0x33880f71
- (id)copyParseRules;	// 0x3388070d
- (void)dealloc;	// 0x33880a79
- (id)description;	// 0x338809c5
// declared property getter: - (id)extraChildItems;	// 0x33880f89
- (id)generateItemTreeString;	// 0x3388079d
- (void)generateItemTreeString:(id)string withDepth:(unsigned)depth;	// 0x33880cdd
- (id)generateStandardItemStringWithDepth:(unsigned)depth;	// 0x33880719
- (id)generateXMLString;	// 0x338807f1
- (id)hashString;	// 0x33880be9
// declared property getter: - (id)name;	// 0x33880f41
// declared property getter: - (id)nameSpace;	// 0x33880f59
- (void)parserFoundAttributes:(id)attributes;	// 0x3388090d
- (void)parserFoundPayload:(id)payload;	// 0x33880949
- (void)parserFoundUnrecognizedElement:(id)element;	// 0x3388095d
- (void)parserSuggestsBaseURL:(id)url;	// 0x33880715
// declared property getter: - (id)payload;	// 0x33880fa1
// converted property getter: - (id)payloadAsString;	// 0x338808b5
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x33881011
// declared property setter: - (void)setExtraChildItems:(id)items;	// 0x3388103d
// declared property setter: - (void)setName:(id)name;	// 0x33880fb9
// declared property setter: - (void)setNameSpace:(id)space;	// 0x33880fe5
// declared property setter: - (void)setPayload:(id)payload;	// 0x33881069
// converted property setter: - (void)setPayloadAsString:(id)string;	// 0x33880889
- (BOOL)validate;	// 0x33880711
- (void)write:(id)write;	// 0x33880dbd
@end
