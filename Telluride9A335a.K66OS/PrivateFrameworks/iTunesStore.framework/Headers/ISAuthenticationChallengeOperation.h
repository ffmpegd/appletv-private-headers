/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISDialogOperation.h"

@class ISAuthenticationChallenge;

@interface ISAuthenticationChallengeOperation : ISDialogOperation {
	ISAuthenticationChallenge *_challenge;	// 80 = 0x50
}
@property(retain) ISAuthenticationChallenge *challenge;	// G=0x30f15301; S=0x30f15315; @synthesize=_challenge
+ (id)operationWithChallenge:(id)challenge;	// 0x30f15045
- (id)_copyCredentialForSignInResponseDictionary:(id)responseDictionary;	// 0x30f15205
// declared property getter: - (id)challenge;	// 0x30f15301
- (void)dealloc;	// 0x30f15001
- (void)handleButtonSelected:(int)selected withResponseDictionary:(id)responseDictionary;	// 0x30f150a9
- (void)run;	// 0x30f15155
// declared property setter: - (void)setChallenge:(id)challenge;	// 0x30f15315
@end

