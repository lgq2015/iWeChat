//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class MMTimer, NSArray;

@interface WXGDotDotDotLabel : UILabel
{
    MMTimer *m_animationTimer;
    unsigned long long m_imageIndex;
    NSArray *_wordList;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSArray *wordList; // @synthesize wordList=_wordList;
- (void).cxx_destruct;
- (void)_startAnimations;
- (void)animateforDuration:(double)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
