/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPropFindTaskDelegate.h"
#import "CoreDAVTaskGroup.h"

@class NSSet, NSString, NSMutableSet;
@protocol CoreDAVContainerInfoTaskGroupDelegate;

@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {
	int _phase;	// 44 = 0x2c
	NSMutableSet *_containerURLs;	// 48 = 0x30
	NSMutableSet *_containers;	// 52 = 0x34
	int _containerInfoDepth;	// 56 = 0x38
	NSString *_appSpecificHomeSetPropNameSpace;	// 60 = 0x3c
	NSString *_appSpecificHomeSetPropName;	// 64 = 0x40
}
@property(assign) int containerInfoDepth;	// G=0x336f4f79; S=0x336f4f8d; @synthesize=_containerInfoDepth
@property(readonly, assign) NSSet *containerURLs;	// G=0x336f4fa5; @synthesize=_containerURLs
@property(assign, nonatomic) id<CoreDAVContainerInfoTaskGroupDelegate> delegate;	// @dynamic
- (id)initWithAccountInfoProvider:(id)accountInfoProvider containerURLs:(id)urls taskManager:(id)manager;	// 0x336f41d5
- (id)_copyContainerParserMappings;	// 0x336f4f5d
- (id)_copyContainerWithURL:(id)url andProperties:(id)properties;	// 0x336f4f21
- (void)_getContainerHomeSet;	// 0x336f4405
- (void)_getContainerTopLevelInfo;	// 0x336f45b1
// declared property getter: - (int)containerInfoDepth;	// 0x336f4f79
- (int)containerInfoDepthForURL:(id)url;	// 0x336f43f5
// declared property getter: - (id)containerURLs;	// 0x336f4fa5
- (void)dealloc;	// 0x336f4241
- (id)description;	// 0x336f42cd
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x336f47d5
// declared property setter: - (void)setContainerInfoDepth:(int)depth;	// 0x336f4f8d
- (void)startTaskGroup;	// 0x336f433d
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x336f4389
@end
