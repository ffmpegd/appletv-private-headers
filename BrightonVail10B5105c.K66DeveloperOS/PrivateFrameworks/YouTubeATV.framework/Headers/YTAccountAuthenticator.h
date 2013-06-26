/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "NSURLConnectionDelegate.h"
#import <NSObject.h> // Unknown library

@class NSMutableData, NSString, NSDate, NSHTTPURLResponse;

@interface YTAccountAuthenticator : NSObject <NSURLConnectionDelegate> {
	NSString *_accountToken;	// 4 = 0x4
	NSDate *_accountTokenDate;	// 8 = 0x8
	NSString *_account;	// 12 = 0xc
	NSString *_accountYouTubeName;	// 16 = 0x10
	NSString *_password;	// 20 = 0x14
	NSMutableData *_responseData;	// 24 = 0x18
	NSHTTPURLResponse *_urlResponse;	// 28 = 0x1c
	NSString *_authURLBase;	// 32 = 0x20
}
@property(retain, nonatomic) NSString *account;	// G=0x352d0985; S=0x352d0995; @synthesize=_account
@property(retain, nonatomic) NSString *accountToken;	// G=0x352d0945; S=0x352d0955; @synthesize=_accountToken
@property(retain, nonatomic) NSDate *accountTokenDate;	// G=0x352d0965; S=0x352d0975; @synthesize=_accountTokenDate
@property(retain, nonatomic) NSString *accountYouTubeName;	// G=0x352cf819; S=0x352d09a5; @synthesize=_accountYouTubeName
@property(retain, nonatomic) NSString *password;	// G=0x352d09b5; S=0x352d09c5; @synthesize=_password
@property(retain, nonatomic) NSHTTPURLResponse *urlResponse;	// G=0x352d09d5; S=0x352d09e5; @synthesize=_urlResponse
+ (id)sharedAuthenticator;	// 0x352cf4b1
- (id)init;	// 0x352cf4f9
- (id)_authRequestForAccount:(id)account password:(id)password;	// 0x352cf9d5
- (id)_authRequestWithURL:(id)url;	// 0x352cf939
- (void)_clearURLResponseInfo;	// 0x352cfbd5
- (void)_getNewTokenForAccount:(id)account password:(id)password;	// 0x352cfb2d
- (BOOL)_isTokenExpired:(id)expired;	// 0x352cf8e1
- (id)_passwordFromKeychain;	// 0x352cff4d
- (void)_postAccountTokenGenerationFailedWithError:(id)error;	// 0x352cfdf5
- (void)_postNewAccountTokenAvailable;	// 0x352d007d
- (void)_removePasswordFromKeychain;	// 0x352cfc15
// declared property getter: - (id)account;	// 0x352d0985
// declared property getter: - (id)accountToken;	// 0x352d0945
// declared property getter: - (id)accountTokenDate;	// 0x352d0965
// declared property getter: - (id)accountYouTubeName;	// 0x352cf819
- (BOOL)cachedCredentialsValid;	// 0x352cf61d
- (void)clearAccountInfo;	// 0x352cfd15
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x352d03e1
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x352d03f5
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x352d03cd
- (void)connectionDidFinishLoading:(id)connection;	// 0x352d0415
- (void)dealloc;	// 0x352cf541
- (BOOL)loadStoredCredentials;	// 0x352cf6c1
// declared property getter: - (id)password;	// 0x352d09b5
- (BOOL)readyToRequestToken;	// 0x352cf7e9
// declared property setter: - (void)setAccount:(id)account;	// 0x352d0995
// declared property setter: - (void)setAccountToken:(id)token;	// 0x352d0955
// declared property setter: - (void)setAccountTokenDate:(id)date;	// 0x352d0975
// declared property setter: - (void)setAccountYouTubeName:(id)name;	// 0x352d09a5
// declared property setter: - (void)setPassword:(id)password;	// 0x352d09c5
// declared property setter: - (void)setUrlResponse:(id)response;	// 0x352d09e5
- (id)tokenForCurrentAccount;	// 0x352cf829
// declared property getter: - (id)urlResponse;	// 0x352d09d5
- (void)validateAccount:(id)account password:(id)password;	// 0x352cf8cd
@end
