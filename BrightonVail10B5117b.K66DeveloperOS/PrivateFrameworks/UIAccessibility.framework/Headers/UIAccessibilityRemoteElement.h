/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import "UIAccessibility-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableSet;
@protocol UIAccessibilityRemoteElementChildrenDelegate;

@interface UIAccessibilityRemoteElement : NSObject {
	NSString *_uuid;	// 4 = 0x4
	int _remotePid;	// 8 = 0x8
	unsigned _contextId;	// 12 = 0xc
	BOOL _onClientSide;	// 16 = 0x10
	id _remoteChildrenDelegate;	// 20 = 0x14
	NSMutableSet *_allChildren;	// 24 = 0x18
}
@property(assign, nonatomic) unsigned contextId;	// G=0x35c4314d; S=0x35c4315d; @synthesize=_contextId
@property(assign, nonatomic) BOOL onClientSide;	// G=0x35c4316d; S=0x35c4317d; @synthesize=_onClientSide
@property(assign, nonatomic) id<UIAccessibilityRemoteElementChildrenDelegate> remoteChildrenDelegate;	// G=0x35c4318d; S=0x35c4319d; @synthesize=_remoteChildrenDelegate
@property(assign, nonatomic) int remotePid;	// G=0x35c4310d; S=0x35c4311d; @synthesize=_remotePid
@property(retain, nonatomic) NSString *uuid;	// G=0x35c4312d; S=0x35c4313d; @synthesize=_uuid
+ (void)initialize;	// 0x35c42699
+ (BOOL)registerRemoteElement:(id)element;	// 0x35c42bd1
+ (id)remoteElementForBlock:(id)block;	// 0x35c42aad
+ (id)remoteElementForContextId:(unsigned)contextId;	// 0x35c42b55
- (id)initWithUUID:(id)uuid andRemotePid:(int)pid andContextId:(unsigned)anId;	// 0x35c42705
- (id)accessibilityContainerElements;	// 0x35c42905
- (CGRect)accessibilityFrame;	// 0x35c42e51
- (BOOL)accessibilityViewIsModal;	// 0x35c42901
// declared property getter: - (unsigned)contextId;	// 0x35c4314d
- (void)dealloc;	// 0x35c427d9
- (id)description;	// 0x35c43049
// declared property getter: - (BOOL)onClientSide;	// 0x35c4316d
// declared property getter: - (id)remoteChildrenDelegate;	// 0x35c4318d
// declared property getter: - (int)remotePid;	// 0x35c4310d
// declared property setter: - (void)setContextId:(unsigned)anId;	// 0x35c4315d
// declared property setter: - (void)setOnClientSide:(BOOL)side;	// 0x35c4317d
// declared property setter: - (void)setRemoteChildrenDelegate:(id)delegate;	// 0x35c4319d
// declared property setter: - (void)setRemotePid:(int)pid;	// 0x35c4311d
// declared property setter: - (void)setUuid:(id)uuid;	// 0x35c4313d
- (void)unregister;	// 0x35c42e31
// declared property getter: - (id)uuid;	// 0x35c4312d
@end
