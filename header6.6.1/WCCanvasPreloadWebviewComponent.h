//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCanvasComponent.h"

#import "WCCanvasJSLogicDelegate-Protocol.h"
#import "YYWebViewDelegate-Protocol.h"

@class NSString, NSURLRequest, UIView, WCCanvasJSLogic;
@protocol YYWebViewInterface;

@interface WCCanvasPreloadWebviewComponent : WCCanvasComponent <YYWebViewDelegate, WCCanvasJSLogicDelegate>
{
    UIView<YYWebViewInterface> *_webView;
    WCCanvasJSLogic *_jsLogic;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
@property(retain, nonatomic) WCCanvasJSLogic *jsLogic; // @synthesize jsLogic=_jsLogic;
@property(retain, nonatomic) UIView<YYWebViewInterface> *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)onOperateVoteAdData:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (id)getPreInjectScriptStr;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly) Class superclass;

@end

