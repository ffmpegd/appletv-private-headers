/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

#import <NSObject.h> // Unknown library
#import "CertUI-Structs.h"

@class NSString;

@interface CertUITrustManager : NSObject {
	NSString *_access;	// 4 = 0x4
}
+ (void)_migrateVersionZeroFromAccessGroup:(id)accessGroup toGroup:(id)group;	// 0x350af349
+ (id)defaultTrustManager;	// 0x350ae7c9
+ (void)migrateFromVersionOne;	// 0x350af699
+ (void)migrateFromVersionZero;	// 0x350af659
- (id)init;	// 0x350ae889
- (id)initWithAccessGroup:(id)accessGroup;	// 0x350ae835
- (int)_actionForTrust:(SecTrust *)trust exceptions:(id)exceptions;	// 0x350ae8e9
- (BOOL)_hasExceptionsForSMIMETrust:(SecTrust *)smimetrust sender:(id)sender;	// 0x350af211
- (int)actionForSMIMETrust:(SecTrust *)smimetrust sender:(id)sender;	// 0x350aec39
- (int)actionForSSLTrust:(SecTrust *)ssltrust hostname:(id)hostname service:(id)service;	// 0x350ae939
- (int)actionForTrust:(SecTrust *)trust forHost:(id)host andService:(id)service;	// 0x350af1e1
- (void)addSMIMETrust:(SecTrust *)trust sender:(id)sender;	// 0x350aef01
- (void)addSSLTrust:(SecTrust *)trust hostname:(id)hostname service:(id)service;	// 0x350aed39
- (void)allowTrust:(SecTrust *)trust forHost:(id)host service:(id)service;	// 0x350af1f1
- (void)clearSavedTrustSettingsForTrust:(SecTrust *)trust host:(id)host service:(id)service;	// 0x350af201
- (void)dealloc;	// 0x350ae89d
- (void)removeAllTrusts;	// 0x350af109
- (void)removeSMIMETrust:(SecTrust *)trust sender:(id)sender;	// 0x350af08d
- (void)removeSSLTrust:(SecTrust *)trust hostname:(id)hostname service:(id)service;	// 0x350aef91
@end

