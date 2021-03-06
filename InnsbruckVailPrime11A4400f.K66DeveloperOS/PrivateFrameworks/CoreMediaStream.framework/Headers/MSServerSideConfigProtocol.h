/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import </libobjc.A.h>

@class NSString, NSURL;
@protocol MSServerSideConfigProtocolDelegate;

@interface MSServerSideConfigProtocol : NSObject {
	id<MSServerSideConfigProtocolDelegate> _delegate;	// 4 = 0x4
	NSString *_personID;	// 8 = 0x8
	NSURL *_configURL;	// 12 = 0xc
	MSSSCPCContext _context;	// 16 = 0x10
}
@property(assign, nonatomic) id<MSServerSideConfigProtocolDelegate> delegate;	// G=0x304efccd; S=0x304efcdd; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x304efcbd; @synthesize=_personID
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x304ef9f5
- (void).cxx_destruct;	// 0x304efced
- (void)_didFailAuthenticationWithError:(id)error;	// 0x304efc99
- (void)_didFinishWithResponse:(id)response error:(id)error;	// 0x304efc55
- (void)abort;	// 0x304efc41
- (void)dealloc;	// 0x304efbbd
// declared property getter: - (id)delegate;	// 0x304efccd
// declared property getter: - (id)personID;	// 0x304efcbd
- (void)queryConfiguration;	// 0x304efc0d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x304efcdd
@end

