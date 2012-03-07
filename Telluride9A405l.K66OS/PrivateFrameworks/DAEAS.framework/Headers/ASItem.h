/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library
#import "ASParsing.h"

@class NSInvocation, NSMutableDictionary;

@interface ASItem : NSObject <ASParsing> {
	ASItem *_root;	// 4 = 0x4
	ASItem *_parent;	// 8 = 0x8
	int _codePage;	// 12 = 0xc
	int _token;	// 16 = 0x10
	NSObject<ASParsing> *_currentlyParsingSubItem;	// 20 = 0x14
	int _currentlyParsingCPTNumber;	// 24 = 0x18
	NSInvocation *_currentStreamInvocation;	// 28 = 0x1c
	int _parsingState;	// 32 = 0x20
	NSMutableDictionary *_parseRuleUsageNumbers;	// 36 = 0x24
}
@property(retain) NSInvocation *currentStreamInvocation;	// G=0x341fa571; S=0x341fa581; converted property
@property(readonly, retain) ASItem *parent;	// G=0x341fa115; converted property
@property(readonly, assign) int parsingState;	// G=0x341fa561; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x341f85bd
+ (BOOL)expectsContent;	// 0x341fa5c5
+ (BOOL)frontingBasicTypes;	// 0x341f873d
+ (BOOL)notifyOfUnknownTokens;	// 0x341f87bd
+ (BOOL)parsingLeafNode;	// 0x341f863d
+ (BOOL)parsingWithSubItems;	// 0x341f86bd
- (id)init;	// 0x341f883d
- (int)_dataclass;	// 0x341f96e1
- (BOOL)_haveEnoughDataToKeepParsingWithContext:(id)context curToken:(unsigned char)token;	// 0x341f97fd
- (BOOL)_itemPathMatches:(id)matches;	// 0x341fa125
- (BOOL)_itemPathWithDCCPTMatches:(id)dccptmatches dccpt:(int)dccpt;	// 0x341fa28d
- (BOOL)_parseNextValueWithDataclass:(int)dataclass context:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict6 parseRules:(id)rules account:(id)account;	// 0x341f9881
- (id)_replacementObjectWithCallbackDict:(id)callbackDict;	// 0x341fa1d9
- (void)_setCurrentlyParsingSubItem:(id)item;	// 0x341f9591
- (BOOL)_setupFirstParseWithContext:(id)context root:(id)root parent:(id)parent;	// 0x341f95d5
- (BOOL)_streamIfNecessaryFromContext:(id)context;	// 0x341f9755
- (int)_streamYourLittleHeartOutWithContext:(id)context;	// 0x341f8925
- (id)_streamingInvocationForStreamingCallbackDict:(id)streamingCallbackDict dccpt:(int)dccpt;	// 0x341fa3f5
- (id)asParseRules;	// 0x341fa515
// converted property getter: - (id)currentStreamInvocation;	// 0x341fa571
- (void)dealloc;	// 0x341f88b1
- (void)ignoreThisContent:(id)content;	// 0x341fa4cd
- (BOOL)nextParsedObjectWithContext:(id)context root:(id)root callbackDict:(id)dict streamCallbackDict:(id)dict4 dataclass:(int)dataclass outParsedObject:(id *)object outCPTNumber:(int *)number account:(id)account;	// 0x341f8e29
// converted property getter: - (id)parent;	// 0x341fa115
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x341f9cf9
// converted property getter: - (int)parsingState;	// 0x341fa561
// converted property setter: - (void)setCurrentStreamInvocation:(id)invocation;	// 0x341fa581
@end

