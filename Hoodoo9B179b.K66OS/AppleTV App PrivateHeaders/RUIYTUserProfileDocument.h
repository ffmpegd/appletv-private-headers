/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocument.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RUIYTUserProfileDocument : RUIYTDocument {
	int _age;	// 52 = 0x34
	NSString *_accountYouTubeName;	// 56 = 0x38
	NSString *_accessToken;	// 60 = 0x3c
}
@property(retain) NSString *accessToken;	// G=0x7dd15; S=0x7dd29; @synthesize=_accessToken
@property(retain) NSString *accountYouTubeName;	// G=0x7dcdd; S=0x7dcf1; @synthesize=_accountYouTubeName
@property(assign) int age;	// G=0x7dcbd; S=0x7dccd; @synthesize=_age
- (void).cxx_destruct;	// 0x7dd4d
- (id)URLRequest;	// 0x7d871
// declared property getter: - (id)accessToken;	// 0x7dd15
// declared property getter: - (id)accountYouTubeName;	// 0x7dcdd
// declared property getter: - (int)age;	// 0x7dcbd
- (void)documentLoaded;	// 0x7d9f1
// declared property setter: - (void)setAccessToken:(id)token;	// 0x7dd29
// declared property setter: - (void)setAccountYouTubeName:(id)name;	// 0x7dcf1
// declared property setter: - (void)setAge:(int)age;	// 0x7dccd
@end
