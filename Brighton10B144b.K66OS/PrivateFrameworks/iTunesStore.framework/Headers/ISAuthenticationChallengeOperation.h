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
@property(retain) ISAuthenticationChallenge *challenge;	// G=0x3688a545; S=0x3688a559; @synthesize=_challenge
+ (id)operationWithChallenge:(id)challenge;	// 0x3688a289
- (id)_copyCredentialForSignInResponseDictionary:(id)responseDictionary;	// 0x3688a449
// declared property getter: - (id)challenge;	// 0x3688a545
- (void)dealloc;	// 0x3688a245
- (void)handleButtonSelected:(int)selected withResponseDictionary:(id)responseDictionary;	// 0x3688a2ed
- (void)run;	// 0x3688a399
// declared property setter: - (void)setChallenge:(id)challenge;	// 0x3688a559
@end

