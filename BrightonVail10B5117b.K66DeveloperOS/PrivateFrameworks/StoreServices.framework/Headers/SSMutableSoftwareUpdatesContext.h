/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSSoftwareUpdatesContext.h"
#import "SSXPCCoding.h"

@class NSArray, NSString;

@interface SSMutableSoftwareUpdatesContext : SSSoftwareUpdatesContext <SSXPCCoding> {
}
@property(copy, nonatomic) NSString *clientIdentifierHeader;	// S=0x356a684d; @dynamic
@property(assign, nonatomic, getter=isForced) BOOL forced;	// S=0x356a6891; @dynamic
@property(copy, nonatomic) NSArray *softwareTypes;	// S=0x356a68a1; @dynamic
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x356a6911
- (id)copyXPCEncoding;	// 0x356a68e5
// declared property setter: - (void)setClientIdentifierHeader:(id)header;	// 0x356a684d
// declared property setter: - (void)setForced:(BOOL)forced;	// 0x356a6891
// declared property setter: - (void)setSoftwareTypes:(id)types;	// 0x356a68a1
@end

