/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TextInput-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface TIMecabraCandidate : XXUnknownSuperclass {
	void *_candidate;	// 12 = 0xc
	NSString *_displayReading;	// 16 = 0x10
	NSString *_firstSyllable;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *convertedInput;	// G=0x3314bd65; 
@property(readonly, assign, nonatomic) NSString *displayReading;	// G=0x3314c009; 
@property(readonly, assign, nonatomic) NSString *firstSyllable;	// G=0x3314bd79; 
- (id)initConversionCandidateWithSurface:(id)surface andInput:(id)input;	// 0x3314bead
- (id)initWithMecabraCandidate:(const void *)mecabraCandidate;	// 0x3314bef9
- (id)candidate;	// 0x3314bd3d
// declared property getter: - (id)convertedInput;	// 0x3314bd65
- (id)copyWithZone:(NSZone *)zone;	// 0x3314bfb5
- (void)dealloc;	// 0x3314bf41
// declared property getter: - (id)displayReading;	// 0x3314c009
// declared property getter: - (id)firstSyllable;	// 0x3314bd79
- (id)input;	// 0x3314bd51
- (BOOL)isEmojiCandidate;	// 0x3314c2dd
- (BOOL)isExtensionCandidate;	// 0x3314c2c1
- (BOOL)isForShortcutConversion;	// 0x3314c2f9
- (void *)mecabraCandidate;	// 0x3314bff9
@end

