/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import "VoiceServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSString;

@interface VSTextPreProcessor : NSObject {
	NSArray *_rules;	// 4 = 0x4
	NSString *_languageID;	// 8 = 0x8
	CFStringTokenizerRef _tokenizer;	// 12 = 0xc
}
- (id)initWithContentsOfPath:(id)path languageIdentifier:(id)identifier;	// 0x32025969
- (void)dealloc;	// 0x32025b89
- (id)processedTextFromString:(id)string;	// 0x32025c01
@end

