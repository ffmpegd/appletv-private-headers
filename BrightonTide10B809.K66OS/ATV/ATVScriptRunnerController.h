/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedController.h"

@class ATVJSContext, BRTextControl, BRProgressBarWidget;

__attribute__((visibility("hidden")))
@interface ATVScriptRunnerController : ATVFeedController {
	BRTextControl *_statusText;	// 104 = 0x68
	BRProgressBarWidget *_progressBar;	// 108 = 0x6c
	ATVJSContext *_context;	// 112 = 0x70
}
@property(retain, nonatomic) ATVJSContext *context;	// G=0x17202d; S=0x17203d; @synthesize=_context
@property(retain, nonatomic) BRProgressBarWidget *progressBar;	// G=0x17200d; S=0x17201d; @synthesize=_progressBar
@property(retain, nonatomic) BRTextControl *statusText;	// G=0x171fed; S=0x171ffd; @synthesize=_statusText
- (id)initWithDictionary:(id)dictionary;	// 0x1715d5
- (id)initWithFeedElement:(id)feedElement;	// 0x1714f1
- (void)_evaluateScripts:(id)scripts inContext:(id)context;	// 0x171729
- (void)_setStatus:(id)status withPercentComplete:(float)percentComplete;	// 0x171ea9
// declared property getter: - (id)context;	// 0x17202d
- (void)dealloc;	// 0x1716b9
- (void)layoutSubcontrols;	// 0x171d95
// declared property getter: - (id)progressBar;	// 0x17200d
// declared property setter: - (void)setContext:(id)context;	// 0x17203d
// declared property setter: - (void)setProgressBar:(id)bar;	// 0x17201d
// declared property setter: - (void)setStatusText:(id)text;	// 0x171ffd
// declared property getter: - (id)statusText;	// 0x171fed
- (void)wasPopped;	// 0x171d31
- (void)wasPushed;	// 0x171a2d
@end

