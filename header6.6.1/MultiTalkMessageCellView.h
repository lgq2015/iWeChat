//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMessageCellView.h"

@class MultiTalkMessageViewModel, UIImageView;

@interface MultiTalkMessageCellView : BaseMessageCellView
{
    UIImageView *m_backgroundImageView;
}

- (void).cxx_destruct;
- (void)onLongTouch;
- (id)getBkgImage;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) MultiTalkMessageViewModel *viewModel; // @dynamic viewModel;

@end

