/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"
#import "CoreDAVPropFindTaskDelegate.h"

@class NSString, NSMutableSet, NSSet;
@protocol CoreDAVContainerInfoTaskGroupDelegate;

@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {
	int _phase;	// 44 = 0x2c
	NSMutableSet *_containerURLs;	// 48 = 0x30
	NSMutableSet *_containers;	// 52 = 0x34
	int _containerInfoDepth;	// 56 = 0x38
	NSString *_appSpecificHomeSetPropNameSpace;	// 60 = 0x3c
	NSString *_appSpecificHomeSetPropName;	// 64 = 0x40
}
@property(assign) int containerInfoDepth;	// G=0x30fddad9; S=0x30fddae9; @synthesize=_containerInfoDepth
@property(readonly, assign) NSSet *containerURLs;	// G=0x30fddaf9; @synthesize=_containerURLs
@property(assign, nonatomic) id<CoreDAVContainerInfoTaskGroupDelegate> delegate;	// @dynamic
- (id)initWithAccountInfoProvider:(id)accountInfoProvider containerURLs:(id)urls taskManager:(id)manager;	// 0x30fdcded
- (id)_copyContainerParserMappings;	// 0x30fddabd
- (id)_copyContainerWithURL:(id)url andProperties:(id)properties;	// 0x30fdda81
- (void)_getContainerHomeSet;	// 0x30fdd001
- (void)_getContainerTopLevelInfo;	// 0x30fdd1b1
// declared property getter: - (int)containerInfoDepth;	// 0x30fddad9
// declared property getter: - (id)containerURLs;	// 0x30fddaf9
- (void)dealloc;	// 0x30fdce55
- (id)description;	// 0x30fdcedd
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x30fdd38d
// declared property setter: - (void)setContainerInfoDepth:(int)depth;	// 0x30fddae9
- (void)startTaskGroup;	// 0x30fdcf4d
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x30fdcf95
@end

