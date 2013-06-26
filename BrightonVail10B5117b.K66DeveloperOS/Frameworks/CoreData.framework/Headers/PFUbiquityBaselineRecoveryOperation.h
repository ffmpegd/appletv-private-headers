/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityBaselineOperation.h"

@class NSObject;
@protocol PFUbiquityBaselineRecoveryOperationDelegate;

@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation {
}
@property(assign) NSObject<PFUbiquityBaselineRecoveryOperationDelegate> *delegate;	// G=0x3102b5a9; S=0x3102b5d5; 
- (BOOL)conflictsExistForBaseline:(id)baseline;	// 0x3102b895
// declared property getter: - (id)delegate;	// 0x3102b5a9
- (id)electAncestorBaselineForConflictedBaselines:(id)conflictedBaselines dissentingBaselines:(id *)baselines;	// 0x3102b909
- (BOOL)electBaselineURLFromVersionURLs:(id)versionURLs withBaseline:(id)baseline error:(id *)error;	// 0x3102bc05
- (BOOL)hasCurrentBaseline;	// 0x3102b699
- (BOOL)isEqual:(id)equal;	// 0x3102b62d
- (void)main;	// 0x3102d0a9
- (BOOL)replaceLocalStoreWithBaseline:(id)baseline error:(id *)error;	// 0x3102cba5
- (BOOL)resolveConflictsForBaseline:(id)baseline withError:(id *)error;	// 0x3102c611
- (id)retainedDelegate;	// 0x3102b601
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3102b5d5
- (BOOL)shouldReplaceLocalStoreWithBaseline:(id)baseline;	// 0x3102c8e5
@end
