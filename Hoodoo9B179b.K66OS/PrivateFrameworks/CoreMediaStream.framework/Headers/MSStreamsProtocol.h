/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "CoreMediaStream-Structs.h"

@class NSURL, NSString;
@protocol MSStreamsProtocolDelegate;

@interface MSStreamsProtocol : NSObject {
@private
	id<MSStreamsProtocolDelegate> _delegate;	// 4 = 0x4
	NSString *_personID;	// 8 = 0x8
	NSURL *_URL;	// 12 = 0xc
}
@property(assign, nonatomic) id<MSStreamsProtocolDelegate> delegate;	// G=0x36a5cf3d; S=0x36a5cf4d; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSURL *deleteURL;	// G=0x36a5ca8d; 
@property(readonly, assign, nonatomic) NSURL *getURL;	// G=0x36a5c7e5; 
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x36a5cf5d; @synthesize=_personID
@property(readonly, assign, nonatomic) NSURL *putURL;	// G=0x36a5c86d; 
@property(readonly, assign, nonatomic) NSURL *reauthorizeURL;	// G=0x36a5c97d; 
@property(readonly, assign, nonatomic) NSURL *resetURL;	// G=0x36a5c8f5; 
@property(readonly, assign, nonatomic) NSURL *uploadCompleteURL;	// G=0x36a5ca05; 
+ (id)deviceInfoDictForPersonID:(id)personID;	// 0x36a5cb75
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x36a5c745
- (void)_didFindServerSideConfigurationVersion:(id)version;	// 0x36a5ce25
- (void)_didReceiveRetryAfterDate:(id)date;	// 0x36a5ce71
- (void)_refreshAuthTokenForContext:(MSSPCContext *)context;	// 0x36a5cef5
- (void)abort;	// 0x36a5cb15
- (void)dealloc;	// 0x36a5c799
// declared property getter: - (id)delegate;	// 0x36a5cf3d
// declared property getter: - (id)deleteURL;	// 0x36a5ca8d
- (id)deviceInfoDict;	// 0x36a5cb3d
// declared property getter: - (id)getURL;	// 0x36a5c7e5
// declared property getter: - (id)personID;	// 0x36a5cf5d
// declared property getter: - (id)putURL;	// 0x36a5c86d
// declared property getter: - (id)reauthorizeURL;	// 0x36a5c97d
// declared property getter: - (id)resetURL;	// 0x36a5c8f5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36a5cf4d
// declared property getter: - (id)uploadCompleteURL;	// 0x36a5ca05
@end

