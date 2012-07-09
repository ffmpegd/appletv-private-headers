/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, _UIViewServiceInterface, _UIViewServiceXPCProxy, _UIAsyncInvocation, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIRemoteViewControllerConnectionRequest : NSObject {
@private
	id _handler;	// 4 = 0x4
	NSString *_viewServiceBundleIdentifier;	// 8 = 0x8
	NSString *_viewControllerClassName;	// 12 = 0xc
	_UIAsyncInvocation *_cancelInvocationForCurrentOperation;	// 16 = 0x10
	struct {
		_UIViewServiceInterface *interface;
		_UIViewServiceXPCProxy *viewControllerOperatorProxy;
		_UIViewServiceXPCProxy *serviceViewControllerProxy;
		_UIViewServiceXPCProxy *textEffectsOperatorProxy;
		unsigned hostedWindowContextID;
		NSArray *serviceViewControllerSupportedInterfaceOrientations;
		NSArray *appearanceRecorderSerializedRepresentations;
		CGAffineTransform serviceRootLayerTransform;
		CGRect serviceRootLayerFrame;
		unsigned textEffectsWindowContextID;
		unsigned textEffectsWindowAboveStatusBarContextID;
	} _connectionInfo;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *_queue;	// 96 = 0x60
	long _actionToken;	// 100 = 0x64
	BOOL _isCancelled;	// 104 = 0x68
}
+ (id)requestViewController:(id)controller fromServiceWithBundleIdentifier:(id)bundleIdentifier connectionHandler:(id)handler;	// 0x304578a5
- (void)_cancelWithError:(id)error then:(id)then;	// 0x30459849
- (void)_connectToServiceViewController;	// 0x304592f5
- (void)_connectToTextEffectsOperator;	// 0x30458c81
- (void)_connectToViewControllerOperator;	// 0x30458391
- (void)_connectToViewService;	// 0x30458081
- (void)_didFinishEstablishingConnection;	// 0x304596e9
- (void)_sendServiceTextEffectsRequest;	// 0x3045909d
- (void)_sendServiceViewControllerRequest;	// 0x304587ad
- (void)dealloc;	// 0x30457f79
@end
