--[[
    All the fonts in this directory.
    Nothing really fancy going on here.
--]]
local fonts = {
    "animeace.ttf",
    "animeace_b.ttf",
    "animeace_i.ttf",
    "GFSCUS1D.ttf"
}

-- Prepends 'fonts/' to every string in fonts table
utility.prepend(fonts, "fonts/")

return fonts
