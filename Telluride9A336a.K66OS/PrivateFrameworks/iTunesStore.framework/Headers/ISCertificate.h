/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library
#import "iTunesStore-Structs.h"


@interface ISCertificate : NSObject {
	SecTrust *_trust;	// 4 = 0x4
}
- (void)_invalidate;	// 0x35eb51e1
- (BOOL)checkData:(id)data againstAppleSignature:(id)signature;	// 0x35eb4e91
- (BOOL)checkData:(id)data againstSignature:(id)signature;	// 0x35eb4d81
- (void)dealloc;	// 0x35eb4d41
- (BOOL)isValid;	// 0x35eb4f05
- (void)setCertificateData:(id)data;	// 0x35eb4f95
@end

