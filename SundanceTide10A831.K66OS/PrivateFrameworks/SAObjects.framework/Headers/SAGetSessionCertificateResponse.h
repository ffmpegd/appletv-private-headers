/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSData;

@interface SAGetSessionCertificateResponse : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSData *certificate;	// G=0x304f26f1; S=0x304f270d; 
+ (id)getSessionCertificateResponse;	// 0x304f2661
+ (id)getSessionCertificateResponseWithDictionary:(id)dictionary context:(id)context;	// 0x304f26a5
// declared property getter: - (id)certificate;	// 0x304f26f1
- (id)encodedClassName;	// 0x304f2655
- (id)groupIdentifier;	// 0x304f2645
- (BOOL)requiresResponse;	// 0x304f275d
// declared property setter: - (void)setCertificate:(id)certificate;	// 0x304f270d
@end
