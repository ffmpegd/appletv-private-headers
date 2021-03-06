/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "NSFilePresenter.h"

@class NSString, NSMutableDictionary, PFUbiquityLocation, NSURL, NSOperationQueue;

@interface PFUbiquityFilePresenter : NSObject <NSFilePresenter> {
	PFUbiquityLocation *_ubiquityRootLocation;	// 4 = 0x4
	NSString *_localPeerID;	// 8 = 0x8
	NSURL *_presentedItemURL;	// 12 = 0xc
	unsigned long long _lastFSEventIdentifier;	// 16 = 0x10
	NSMutableDictionary *_delegates;	// 24 = 0x18
}
@property(assign) unsigned long long lastPresentedItemEventIdentifier;	// G=0x35cf2ab1; S=0x35cf2a9d; converted property
@property(readonly, assign) NSString *localPeerID;	// G=0x35cf2add; @synthesize=_localPeerID
@property(readonly, assign) NSOperationQueue *presentedItemOperationQueue;	// G=0x35cf2611; 
@property(readonly, assign) NSURL *presentedItemURL;	// G=0x35cf2601; 
@property(readonly, assign) NSURL *primaryPresentedItemURL;
@property(readonly, assign) PFUbiquityLocation *ubiquityRootLocation;	// G=0x35cf2ac9; @synthesize=_ubiquityRootLocation
+ (void)initialize;	// 0x35cf239d
+ (id)sharedPrivateOperationQueue;	// 0x35cf2401
- (id)init;	// 0x35cf2411
- (id)initWithUbiquityRootLocation:(id)ubiquityRootLocation andLocalPeerID:(id)anId;	// 0x35cf2475
- (void)dealloc;	// 0x35cf24f9
- (id)description;	// 0x35cf2589
// converted property getter: - (unsigned long long)lastPresentedItemEventIdentifier;	// 0x35cf2ab1
// declared property getter: - (id)localPeerID;	// 0x35cf2add
// declared property getter: - (id)presentedItemOperationQueue;	// 0x35cf2611
// declared property getter: - (id)presentedItemURL;	// 0x35cf2601
- (void)presentedSubitemDidChangeAtURL:(id)presentedSubitem;	// 0x35cf263d
- (void)relinquishPresentedItemToReader:(id)reader;	// 0x35cf262d
- (void)relinquishPresentedItemToWriter:(id)writer;	// 0x35cf2635
// converted property setter: - (void)setLastPresentedItemEventIdentifier:(unsigned long long)identifier;	// 0x35cf2a9d
// declared property getter: - (id)ubiquityRootLocation;	// 0x35cf2ac9
@end

