/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSError, SSDownloadPhase;

@interface SSDownloadStatus : NSObject <SSXPCCoding, NSCopying> {
	SSDownloadPhase *_activePhase;	// 4 = 0x4
	BOOL _contentRestricted;	// 8 = 0x8
	NSError *_error;	// 12 = 0xc
	BOOL _failed;	// 16 = 0x10
	BOOL _paused;	// 17 = 0x11
}
@property(readonly, assign, nonatomic) SSDownloadPhase *activePhase;	// G=0x354b68d1; @synthesize=_activePhase
@property(assign, nonatomic, getter=isContentRestricted) BOOL contentRestricted;	// G=0x354b68e1; S=0x354b68f1; @synthesize=_contentRestricted
@property(retain, nonatomic) NSError *error;	// G=0x354b6901; S=0x354b6911; @synthesize=_error
@property(assign, nonatomic, getter=isFailed) BOOL failed;	// G=0x354b6921; S=0x354b6931; @synthesize=_failed
@property(readonly, assign, nonatomic, getter=isFailedTransient) BOOL failedTransient;	// G=0x354b63b5; 
@property(assign, nonatomic, getter=isPausable) BOOL pausable;	// G=0x354b63f5; S=0x354b6555; 
@property(assign, nonatomic, getter=isPaused) BOOL paused;	// G=0x354b6941; S=0x354b6951; @synthesize=_paused
@property(readonly, assign, nonatomic) float percentComplete;	// G=0x354b6429; 
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354b6775
// declared property getter: - (id)activePhase;	// 0x354b68d1
- (id)copyWithZone:(NSZone *)zone;	// 0x354b65fd
- (id)copyXPCEncoding;	// 0x354b66b5
- (void)dealloc;	// 0x354b6351
// declared property getter: - (id)error;	// 0x354b6901
// declared property getter: - (BOOL)isContentRestricted;	// 0x354b68e1
// declared property getter: - (BOOL)isFailed;	// 0x354b6921
// declared property getter: - (BOOL)isFailedTransient;	// 0x354b63b5
// declared property getter: - (BOOL)isPausable;	// 0x354b63f5
// declared property getter: - (BOOL)isPaused;	// 0x354b6941
// declared property getter: - (float)percentComplete;	// 0x354b6429
// declared property setter: - (void)setContentRestricted:(BOOL)restricted;	// 0x354b68f1
// declared property setter: - (void)setError:(id)error;	// 0x354b6911
// declared property setter: - (void)setFailed:(BOOL)failed;	// 0x354b6931
- (void)setOperationProgress:(id)progress;	// 0x354b64bd
- (void)setOperationType:(int)type;	// 0x354b6519
// declared property setter: - (void)setPausable:(BOOL)pausable;	// 0x354b6555
// declared property setter: - (void)setPaused:(BOOL)paused;	// 0x354b6951
- (void)setPercentComplete:(float)complete;	// 0x354b6591
@end
