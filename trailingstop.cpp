//@version=5
indicator(title="Donchian Channels", shorttitle="TS", overlay=true, timeframe="", timeframe_gaps=true)
length = input.int(150, minval=1)

// lower = ta.lowest(length)
lower = (ta.highest(length)-(ta.highest(length)-ta.lowest(length))*0.87)
// basic = ta.highest(length)-2.5
// upper = ta.highest(length)
upper = ta.lowest(length)*4.4
// basis = math.avg(upper, lower)
basis = 0
plot(basis, "Basis", color=#FF6D00)
u = plot(upper, "Upper", color=#FFE57F)
l = plot(lower, "Lower", color=#FFE57F)
fill(u, l, color=color.rgb(33, 150, 243, 95), title="Background")
