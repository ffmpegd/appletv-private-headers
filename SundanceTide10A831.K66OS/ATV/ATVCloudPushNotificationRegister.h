/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVCloudPushNotificationRegister : XXUnknownSuperclass {
	NSDictionary *_cookies;	// 4 = 0x4
	NSString *_dsid;	// 8 = 0x8
}
@property(retain, nonatomic) NSDictionary *cookies;	// G=0xe3a99; S=0xe3aa9; @synthesize=_cookies
@property(copy, nonatomic) NSString *dsid;	// G=0xe3ad1; S=0xe3ae5; @synthesize=_dsid
+ (void)registerPushForUser:(id)user cookies:(id)cookies;	// 0xe2db5
- (void).cxx_destruct;	// 0xe3af5
- (id)_initWithDSID:(id)dsid andCookies:(id)cookies;	// 0xe2d19
- (void)_tryAgainLater;	// 0xe3615
- (void)connection:(id)connection didFailWithError:(id)error;	// 0xe3885
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0xe3895
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0xe3a95
- (void)connectionDidFinishLoading:(id)connection;	// 0xe37cd
// declared property getter: - (id)cookies;	// 0xe3a99
// declared property getter: - (id)dsid;	// 0xe3ad1
// declared property setter: - (void)setCookies:(id)cookies;	// 0xe3aa9
// declared property setter: - (void)setDsid:(id)dsid;	// 0xe3ae5
@end
