/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSString;
@protocol MSServerSideConfigProtocolDelegate;

@interface MSServerSideConfigProtocol : NSObject {
	id<MSServerSideConfigProtocolDelegate> _delegate;	// 4 = 0x4
	NSString *_personID;	// 8 = 0x8
	NSURL *_configURL;	// 12 = 0xc
	MSSSCPCContext _context;	// 16 = 0x10
}
@property(assign, nonatomic) id<MSServerSideConfigProtocolDelegate> delegate;	// G=0x339492c5; S=0x339492d5; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x339492b5; @synthesize=_personID
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x33948ff1
- (void).cxx_destruct;	// 0x339492e5
- (void)_didFailAuthenticationWithError:(id)error;	// 0x33949291
- (void)_didFinishWithResponse:(id)response error:(id)error;	// 0x3394924d
- (void)abort;	// 0x33949239
- (void)dealloc;	// 0x339491b5
// declared property getter: - (id)delegate;	// 0x339492c5
// declared property getter: - (id)personID;	// 0x339492b5
- (void)queryConfiguration;	// 0x33949205
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x339492d5
@end

