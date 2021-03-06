/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSAttributedString, NSArray;

@interface IMAttributedStringParserContext : NSObject {
	NSAttributedString *_inString;	// 4 = 0x4
}
@property(readonly, assign) NSAttributedString *inString;	// G=0x365bbf25; @synthesize=_inString
@property(readonly, assign) NSString *name;	// G=0x365d11b9; 
@property(readonly, assign) NSArray *resultsForLogging;	// G=0x365d11c5; 
@property(readonly, assign) BOOL shouldPreprocess;	// G=0x365bbf39; 
- (id)initWithAttributedString:(id)attributedString;	// 0x365bbe6d
- (void)dealloc;	// 0x365bc311
// declared property getter: - (id)inString;	// 0x365bbf25
// declared property getter: - (id)name;	// 0x365d11b9
- (void)parser:(id)parser foundAttributes:(id)attributes inRange:(NSRange)range;	// 0x365d11cd
- (id)parser:(id)parser preprocessedAttributesForAttributes:(id)attributes range:(NSRange)range;	// 0x365d11d1
- (void)parserDidEnd:(id)parser;	// 0x365bc23d
- (void)parserDidStart:(id)parser;	// 0x365d11c9
// declared property getter: - (id)resultsForLogging;	// 0x365d11c5
// declared property getter: - (BOOL)shouldPreprocess;	// 0x365bbf39
@end

