/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityBaselineOperation.h"

@class NSObject;
@protocol PFUbiquityBaselineRollOperationDelegate;

@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation {
}
@property(assign) NSObject<PFUbiquityBaselineRollOperationDelegate> *delegate;	// G=0x33e4e211; S=0x33e4e1e5; 
// declared property getter: - (id)delegate;	// 0x33e4e211
- (BOOL)haveConsistentStateForBaselineRoll;	// 0x33e4e3f1
- (BOOL)isEqual:(id)equal;	// 0x33e4e269
- (void)main;	// 0x33e4f1cd
- (id)retainedDelegate;	// 0x33e4e23d
- (BOOL)rollBaselineWithError:(id *)error;	// 0x33e4e8d9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33e4e1e5
@end

