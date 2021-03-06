/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityBaselineOperation.h"

@class NSObject;
@protocol PFUbiquityBaselineRecoveryOperationDelegate;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation {
}
@property(assign) NSObject<PFUbiquityBaselineRecoveryOperationDelegate> *delegate;	// G=0x323a3fcd; S=0x323a6415; 
- (BOOL)conflictsExistForBaseline:(id)baseline;	// 0x323a60c9
// declared property getter: - (id)delegate;	// 0x323a3fcd
- (id)electAncestorBaselineForConflictedBaselines:(id)conflictedBaselines dissentingBaselines:(id *)baselines;	// 0x323a5dd5
- (BOOL)hasCurrentBaseline;	// 0x323a613d
- (BOOL)isEqual:(id)equal;	// 0x323a63a5
- (void)main;	// 0x323a3ff9
- (BOOL)replaceLocalStoreWithBaseline:(id)baseline error:(id *)error;	// 0x323a4e1d
- (BOOL)resolveConflictsForBaseline:(id)baseline withError:(id *)error;	// 0x323a5555
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x323a6415
- (BOOL)shouldReplaceLocalStoreWithBaseline:(id)baseline;	// 0x323a52b5
@end

